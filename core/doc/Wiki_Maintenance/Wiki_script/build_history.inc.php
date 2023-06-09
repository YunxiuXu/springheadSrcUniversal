<?php
//
//  1. Generate daily/samples build result table.
//	Table is sorted according to the number of successfully build modules
//	and revision number by discending order.
//
//  History:
//	2022/03/03 F.Kanehori	Change to new style dedcription.
//	2018/04/16 F.Kanehori	Correspond to new php version.
//	2018/01/22 F.Kanehori	Git version.
//	2014/02/19 F.Kanehori	Line order of 'result.log' file has changed.
//	2013/10/28 F.Kanehori	Include today's (current version) information.
//	2013/06/26 F.Kanehori	Change default sort order to by revision.
//	2013/05/29 F.Kanehori	Adds sort order selection facility.
//	2013/05/02 F.Kanehori	Now both dailybuild and Samples available.
//	2013/04/01 F.Kanehori
//

function build_history_get_options()
{
	static $options = array(
		'cookie_usage'	=> 0,	// set 1 if cookies are available
		'delayed_jump'	=> 0,	// set 1 to debug page befor redirect
	);
	return $options;
}

function plugin_build_history_action()
{
	global $vars;

	$options = build_history_get_options();
	if ($options['cookie_usage'] == 0) {
		// Parameters are get from query string.
		//
		$base = isset($vars["base"]) ? $vars["base"] : "";
		$file = isset($vars["file"]) ? $vars["file"] : "";
		$type = isset($vars["type"]) ? $vars["type"] : "1";
		$span = isset($vars["span"]) ? $vars["span"] : "1";
		$unit = isset($vars["unit"]) ? $vars["unit"] : "month";
		$sort = isset($vars["sort"]) ? $vars["sort"] : "revision";
		$referer = isset($vars["referer"]) ? $vars["referer"] : "";
	}
	else {
		// Parameters are get from cookie.
		//
		$base = isset($_COOKIE["sbh_b"]) ? $_COOKIE["sbh_b"] : "";
		$file = isset($_COOKIE["sbh_f"]) ? $_COOKIE["sbh_f"] : "";
		$referer = isset($_COOKIE["sbh_r"]) ? $_COOKIE["sbh_r"] : "";

		// Rest parameters are get from query string.
		//
		$type = isset($vars["type"]) ? $vars["type"] : "1";
		$span = isset($vars["span"]) ? $vars["span"] : "1";
		$unit = isset($vars["unit"]) ? $vars["unit"] : "month";
		$sort = isset($vars["sort"]) ? $vars["sort"] : "revision";
	}


	if (!strcmp($base, "") || !strcmp($file, "")) {
		//
		$body = "Argument missing (\$base or \$file).";
		return array("msg" => $pagetitle, "body" => $body);
	}
	$base = urldecode($base);
	$file = urldecode($file);
	$referer = urldecode($referer);

	// <title>
	//
	$pagetitle = (($type == 1) ? "今朝" : "Samples") . "のビルドの履歴";

	// <body>
	//
	$text = "<div id='preview'><h2>過去のビルドの履歴</h2></div>";

	// (1) display range selection link
	//
	$links = "<table style='border: 0;'>"
		. "<tr>"
		.   "<td>".build_history_make_link($base, $file, $type, 1, "month", $sort, $referer, $span)."</td>"
		.   "<td style='width: 50px;'></td>"
		.   "<td>".build_history_make_link2($base, $file, $type, $span, $unit, "revision", $referer, $sort)."</td>"
		. "</tr>"
		. "<tr>"
		.    "<td>".build_history_make_link($base, $file, $type, 3, "month", $sort, $referer, $span)."</td>"
		.    "<td></td>"
		.    "<td>".build_history_make_link2($base, $file, $type, $span, $unit, "succ", $referer, $sort)."</td>"
		. "</tr>"
		. "<tr>"
		.    "<td>".build_history_make_link($base, $file, $type, 6, "month", $sort, $referer, $span)."</td>"
		.    "<td></td>"
		.    "<td></td>"
		. "</table>";

	// (2) history table
	//
	$table = "<hr>"
		. build_history_make_table($base, $file, $type, $span, $unit, $sort);

	// (3) reference link
	//
	$enc_referer = urlencode(htmlspecialchars($referer));
	$disp_referer = explode("\?", $referer);
	$trailer = "<br>"
		. "<font size='-1'>関連ページ</font><br>&nbsp;&nbsp;"
		. "<a href='$referer'>$disp_referer[1]</a>";

	// Construct whole page.
	//
	$body = $text . $links . $table . $trailer;
	return array("msg" => "$pagetitle", "body" => $body);
}

function build_history_make_uri($base, $file, $type, $span, $unit, $sort, $referer)
{
	$options = build_history_get_options();

	// Make uri string from given arguments.
	//
	$site = "http://springhead.info/wiki/index.php";
	$cmnd = "?cmd=build_history";
	$opts = "";
	if ($options['cookie_usage'] == 0) {
		$opts = "&base=$base&file=$file&referer=$referer";
	}
	$opts .= "&type=$type&span=$span&unit=$unit&sort=$sort";
	return $site . $cmnd . $opts;
}

function build_history_make_link($base, $file, $type, $span, $unit, $sort, $referer, $curr_span)
{
	// Make link tag for time span in html.
	//
	$base = urlencode(htmlspecialchars($base));
	$file = urlencode(htmlspecialchars($file));
	$referer = urlencode(htmlspecialchars($referer));
	$uri = build_history_make_uri($base, $file, $type, $span, $unit, $sort, $referer);

	if ($span == $curr_span) {
		$link =  "<p><font color='gray'>過去 $span"
			. build_history_display_unit($unit)
			. " の履歴</font></p>";
	}
	else {
		$link =  "<p><a href='$uri'>過去 $span"
			. build_history_display_unit($unit)
			. " の履歴</a></p>";
	}

	return $link;
}

function build_history_make_link2($base, $file, $type, $span, $unit, $sort, $referer, $curr_sort)
{
	// Make link tag for sort order in html.
	//
	$base = urlencode(htmlspecialchars($base));
	$file = urlencode(htmlspecialchars($file));
	$referer = urlencode(htmlspecialchars($referer));
	$uri = build_history_make_uri($base, $file, $type, $span, $unit, $sort, $referer);

	$str = (!strcmp($sort, "succ")) ? "成功モジュール数" : "コミット";
	if (!strcmp($sort, $curr_sort)) {
		$link =  "<p><font color='gray'>" . $str . "順</font></p>";
	}
	else {
		$link =  "<p><a href='$uri'>" .$str . "順</a></p>";
	}

	return $link;
}

function build_history_display_unit($unit)
{
	// Make string displayed in link tag.
	//
	$unit_t = array(
		"month" => "ヶ月",
		"week"  => "週間",
		"day"   => "日"
	);
	return array_key_exists($unit, $unit_t) ? $unit_t[$unit] : $unit_t["month"];
}

function build_history_make_table($base, $file, $type, $span, $unit, $sort)
{
	// Make history table (in html).
	//
	//  $base:	Directory name where the file is.
	//  $file:	Name of hitory log file.
	//  $span:	Time span in $unit.
	//  $unit:	Time unit: "month", "week" or "day"

	// Set display date range.
	//
	////$epoch = 6364;		// Epoch: when 'Samples' is added.
	$epoch = "633748b";		// Epoch: when moved to GitHub
	$span_str = "-$span $unit";
	$limit = date("Y-md", strtotime($span_str));
					// Check until this date.

	// Generate table caption.
	//
	$pattern = '/-([0-9]+ )/';
	preg_match($pattern, "-$span $unit", $matches);
	$last = $matches[1];
	$disp_name_1 = (($type == 1) ? "今朝" : "Samples ") . "のビルドの履歴";
	$disp_name_2 = " （"
		     . $last . build_history_display_unit($unit)
		     . "分）";

	$tag_1 = "<ul style='padding-left:16px; margin-left:16px;'><li>";
	$tag_2 = "</li></ul>";
	$caption = $tag_1 . $disp_name_1 . $disp_name_2 . $targ_2;

	// Read content of history file.
	//
	$cmnd = "cat $base/$file | nkf -w";
	exec($cmnd, $histories);

	// Analyze the content.
	//   key format:
	//	 0- 6:	commit id
	//	 7-15:	date [yyyy-mmdd]
	//	16-23:	time [hh:mm:dd]
	//   data format:
	//	same that "History.log"

	$e_patt = '/^\s*$/';
	$c_patt = '/^--\[([0-9a-f]+),([0-9a-f]+),([0-9-]+),([0-9:]+)\]--$/';
	$s_mark = '-*-';
	$prev = '';
	$date = '';
	for ($i = 0; $i < count($histories); $i++) {
		$line = $histories[$i];
		if (preg_match($e_patt, $line, $matches)) continue;	// empty line
		if (preg_match($c_patt, $line, $matches)) {		// new commit starts
			if ($matches[3] == $date) {
				// eliminate data belongs to the same date
				$i += 11;
				continue;
			}
			$commit_id = $matches[1];
			$date = $matches[3];
			$time = $matches[4];
			if (strcmp($date, $limit) <= 0) {
				// no more data needed for this time span
				break;
			}
			for ($n = 0; $n < 11; $n++) {
				$result[$n] = $histories[++$i];
			}
			$curr = join("\n", $result);
			if ($curr == $prev) {
				$curr = $s_mark;
			} else {
				$prev = $curr;
			}
			$key = $commit_id . $date . $time;
			$history[$key] = $curr;
			if (strcmp($commit_id, $epoch) == 0) {
				// epoch found!
				break;
			}
			continue;
		}
		return $caption . "bad log data [$line]";
	}

	// Get information of each revision.
	//   temporary data format (returned from build_history_get_one()):
	//	 0- 6	revision number
	//	 7-15	date of build [yyyy-mm-dd]
	//	16-18	number of modules successfully built
	//	19-21	number of modules having build error
	//	22-	success-module-names
	//
	$prev = '';
	foreach ($history as $revision => $data) {
		if ($history[$revision] == $s_mark) {
			$history[$revision] = $prev;
		} else {
			$prev = $history[$revision];
		}
		$tmp = build_history_get_one($history, $revision, $date, $type);
		if (!strcmp($sort, "revision")) {
			$key = substr($revision, 7, 17);
		}
		else {
			$key = substr($tmp, 16, 3) . substr($revision, 7, 17);
		}
		$modules[$key] = $tmp;
	}
	krsort($modules);

	// Some table attributes.
	//
	// width
	$width_95 = "width: 95%;";		// for whole table
	$w_commit = "width: 10%;";		// for "コミット" column
	$w_date	  = "width: 12%;";		// for "日付" column
	$w_build  = "width: 10%;";		// for "ビルド" column
	$w_run    = "width: 10%;";		// for "実行" column
	$w_module = "width: 57%;";		// for "成功モジュール" column

	// color
	$bgc_head = "background-color: #98fb98;";	// for header row
	$bgc_odd  = "background-color: #ffffff;";	// for odd row
	$bgc_even = "background-color: #e8e8e8;";	// for even row

	// alignment
	$halign_c = "text-align: center;";	// horizontal center
	$halign_l = "text-align: left;";	// horizontal left
	$valign_m = "vertical-align: middle;";	// vertical middle

	// font
	$font_bold = "font-weight: bold;";

	// border, margin, etc.
	$border_1 = "border: solid 1px;";
	$margin_0 = "margin: 0;";
	$margin_5 = "margin: 5px 0 0 0;";	// make room above table
	$collapse = "border-collapse: collapse;";
	$padding_5 = "padding: 5px;";

	$style = array(
		array(		// for even row
			"c" => "$halign_c $valign_m $bgc_even",
			"l" => "$halign_l $valign_m $bgc_even"),
		array(		// for odd row
			"c" => "$halign_c $valign_m $bgc_odd",
			"l" => "$halign_l $valign_m $bgc_odd")
	);

	// Generate table code.
	//
	$kind = ($type == 1) ? "実行" : "ビルド";
	$result_bld = "ビルド<br>成功 / 失敗";
	$result_run = "実行<br>成功 / 失敗";
	$table = "<table style='$width_95 $margin_5 $padding_5 $collapse $border_1'>"
		.   "<tr style='$halign_c $valign_m $bgc_head $font_bold'>"
		.        "<td style='$w_commit $border_1'>コミット</td>"
		.        "<td style='$w_date   $border_1'>日付</td>"
		.        "<td style='$w_build  $border_1'>$result_bld</td>"
		.        "<td style='$w_run    $border_1'>$result_run</td>"
		.        "<td style='$w_module $border_1'>".$kind."<br>成功モジュール</td>"
		.   "</tr>";

	$sw = 1;
	$mod_names_prev = '';
	foreach ($modules as $key => $val) {
		$mod_names = join("; ", build_history_make_array(substr($val, 28)));
		if (strcmp($mod_names, $mod_names_prev)) {
			$mod_names_prev = $mod_names;
			$val = substr($val, 0, 28) . $mod_names;
		}
		else {
			$val = substr($val, 0, 28) . "ditto";
		}
		$table .= build_history_edit_one($val, $style[$sw]);
		$sw = 1 - $sw;
	}

	$table .= "</table>";

	return $caption . $table;
}

/// function build_history_get_head_info()
/// {
/// 	$url = build_history_get_repository_url();
/// 	$cmnd = "svn -r HEAD log $url | nkf -w";
/// 	exec($cmnd, $output);
/// 
/// 	return $output;
/// }

function build_history_get_one($history, $revision, $date, $type)
{
	// Get the log of specified revision from svn.
	//
	$output = $history[$revision];
	$output = explode("\n", mb_convert_encoding($output, "UTF-8", "SJIS"));

	// Build result is ..
	//
	$b_succ_1 = 1;					// src/tests
	$b_fail_1 = 2;
	$r_succ_1 = 3;
	$r_fail_1 = 4;
	$b_succ_2 = 7;					// src/Samples
	$b_fail_2 = 8;
	$r_succ_2 = 9;
	$r_fail_2 = 10;

	// count
	$line_s = ($type == 1) ? $output[$b_succ_1] : $output[$b_succ_2];
	$line_f = ($type == 1) ? $output[$b_fail_1] : $output[$b_fail_2];
	preg_match('/.+\((.+)\)/', $line_s, $matches_s);
	preg_match('/.+\((.+)\)/', $line_f, $matches_f);
	$mods_s = explode(",", $matches_s[1]);
	$mods_f = explode(",", $matches_f[1]);
	$count_s = ($matches_s[0] == "") ? 0 : count($mods_s);
	$count_f = ($matches_f[0] == "") ? 0 : count($mods_f);

	$line_r_s = ($type == 1) ? $output[$r_succ_1] : $output[$r_succ_2];
	$line_r_f = ($type == 1) ? $output[$r_fail_1] : $output[$r_fail_2];
	preg_match('/.+\((.+)\)/', $line_r_s, $matches_r_s);
	preg_match('/.+\((.+)\)/', $line_r_f, $matches_r_f);
	$mods_r_s = explode(",", $matches_r_s[1]);
	$mods_r_f = explode(",", $matches_r_f[1]);
	$count_r_s = ($matches_r_s[0] == "") ? 0 : count($mods_r_s);
	$count_r_f = ($matches_r_f[0] == "") ? 0 : count($mods_r_f);

	// names
	$line_s = ($type == 1) ? $output[$r_succ_1] : $output[$b_succ_2];
	preg_match('/.+\((.+)\)/', $line_s, $matches_s);
	$mods_s = explode(",", $matches_s[1]);
	$mod_names = implode(", ", $mods_s);

	//	 0- 6	revision number
	//	 7-15	date of build [yyyy-mm-dd]
	//	16-18	number of modules successfully built
	//	19-21	number of modules having build error
	//	22-	success-module-names

	$text = sprintf("%16s%3s%3s%3s%3s%s",
				substr($revision, 0, 16),
				$count_s, $count_f, $count_r_s, $count_r_f,
				$mod_names);
	return $text;
}

/// function build_history_get_repository_url()
/// {
/// 	//return "http://springhead.info/spr2/Springhead/trunk/core/test";
/// 	return "https://github.com/sprphys/Springhead/core/test";
/// }

/// function build_history_get_repository_url_raw($commit_id)
/// {
/// 	return "http://raw.github.com/sprphys/Springhead/".$commit_id."/core/test";
/// }

function build_history_edit_one($data, $style)
{
	// Log editor for one revision.
	//
	$revision  = substr($data, 0, 7);
	$date      = substr($data, 7, 7) . "-" . substr($data, 14, 2);
	$count_s   = substr($data, 16, 3);
	$count_f   = substr($data, 19, 3);
	$count_r_s = substr($data, 22, 3);
	$count_r_f = substr($data, 25, 3);
	$mod_names = substr($data, 28);

	if ($count_r_s == 0 && $count_r_f == 0) {
		$count_r_s = "-";
		$count_r_f = "-";
	}

	$style_c = $style["c"];
	$style_l = $style["l"];

	$border_1 = "border: solid 1px;";
	$l_height = "line-height: 100%;";

	$row = "<tr style='$l_height'>"
	     .   "<td style='$style_c $border_1'>$revision</td>"
	     .   "<td style='$style_c $border_1'>$date</td>"
	     .   "<td style='$style_c $border_1'>$count_s / $count_f</td>"
	     .   "<td style='$style_c $border_1'>$count_r_s / $count_r_f</td>"
	     .   "<td style='$style_l font-size: 80%; $border_1'>"
	     .     build_history_make_inner_table($mod_names)
	     .   "</td>"
	     . "</tr>";

	return $row;
}

function build_history_make_array($data)
{
	// Convert string to array as follows.
	//	"lib1:mod1,lib2:mod2,…,libN:modN,…"
	//	==> array("lib1:mod11,mod12,…", …, "libN:modN1,modN2,…", …)
	//
	$i_ary = explode(",", $data);
	$once = 1;
	for ($i = 0; $i < count($i_ary); $i++) {
		$t_ary = explode(":", $i_ary[$i]);
		$t_libname = trim($t_ary[0]);
		$t_modname = trim($t_ary[1]);
		if (strcmp($t_libname, $libname)) {
			if ($once == 0) {
				$o_ary[] = "$libname:$modname";
			}
			$libname = $t_libname;
			$modname = $t_modname;
			$once = 0;
		}
		else {
			$modname .= ", $t_modname";
		}
	}
	$o_ary[] = "$t_libname:$modname";

	return $o_ary;
}

function build_history_make_inner_table($data)
{
	// Make inner table for 'build success modules'.
	//
	$border_0 = "border: 0;";	// no border line
	$width_i  = "width: 2%;";	// indent
	$width_b  = "width: 55%;";	// body

	$table = "<table style='margin: 0; padding: 0;'>";

	$items = explode(";", $data);
	for ($i = 0; $i < count($items); $i++) {
		$item = explode(":", $items[$i]);
		if (!strcmp($item[0], "ditto")) {
			$table .= "<tr>"
				.   "<td style='$width_i $border_0' colspan='2'>$item[0]</td>"
				. "</tr>";
		}
		else {
			$table .= "<tr>"
				.   "<td style='$width_i $border_0' colspan='2'>$item[0]:</td>"
				. "</tr>"
				. "<tr>"
				.   "<td style='$width_i $border_0'>&nbsp;</td>"
				.   "<td style='$width_b $border_0'>$item[1]</td>"
				. "</tr>";
		}
	}

	$table .= "</table>";
	return $table;
}

function plugin_build_history_convert()
{
	global $_SERVER;

	$options = build_history_get_options();
	if ($options['cookie_usage'] == 0) {
		// Set referer to the query, then redirect to the url given by the argument.
		//
		list($redirect_to) = func_get_args();
		//$redirect_to = build_history_urlencode($redirect_to);
		$redirect_to .= "&amp;Breferer=" . urlencode($_SERVER['HTTP_REFERER']);
	}
	else {
		// Set 'span' and 'unit' to the query and rest to the cookie,
		// then redirect to the url given by 'cmd'.
		//
		list($arg) = func_get_args();
		$args = explode("\?", $arg);

		$queries = build_history_query_to_array($args[1]);
		$cmd  = isset($queries["cmd"]) ? $queries["cmd"] : "devel";
		$base = isset($queries["base"]) ? $queries["base"] : "";
		$file = isset($queries["file"]) ? $queries["file"] : "";
		$type = isset($queries["type"]) ? $queries["type"] : "1";
		$span = isset($queries["span"]) ? $queries["span"] : "1";
		$unit = isset($queries["unit"]) ? $queries["unit"] : "month";
		$sort = isset($queries["sort"]) ? $queries["sort"] : "succ";
		$referer = $_SERVER['HTTP_REFERER'];

		setcookie("sbh_b", $base);
		setcookie("sbh_f", $file);
		setcookie("sbh_r", $referer);

		$redirect_to = "$args[0]?cmd=$cmd";
		$redirect_to .= "&type=$type&span=$span&unit=$unit&sort=$sort";
	}

	// ------------------------------
	//  Hook for editting this page.
	// ------------------------------
	if ($options['delayed_jump'] == 0) {
		header("Location: $redirect_to");
		$result = "";
	}
	else {
		$msec = 5000;
		$result = <<<EOD
<script type='text/javascript'>
<!--
setTimeout("link()", $msec);
function link() {
location.href='$redirect_to';
}
-->
</script>
EOD;
	}
	return $result;
}

/*******
function build_history_urlencode($uri)
{
	// Urlencode the uri given by the argument.
	//
	$result = "";

	// -- scheme --
 	$part1 = explode(":", $uri);
	if (count($part1) > 1) {
		$result = urlencode(htmlspecialchars($part1[0])) . ":";
		$part1[0] = $part1[1];
	}

	// -- path --
 	$part2 = explode("\?", $part1[0]);
	$result .= build_history_urlencode_1($part2[0], "/", "");

	// -- query --
	if (count($part2) > 1) {
		$result .= "?" . build_history_urlencode_1($part2[1], "&", "=");
	}

	return $result;
}

function build_history_urlencode_1($str, $sep1, $sep2)
{
	$parts = explode($sep1, $str);

	for ($i = 0; $i < count($parts); $i++) {
		if (strcmp($sep2, "") == 0) {
			$parts[$i] = urlencode(htmlspecialchars($parts[$i]));
		}
		else {
			$parts[$i] = build_history_urlencode_1($parts[$i], $sep2, "");
		}
	}

	return implode($sep1, $parts);
}
*******/

function build_history_query_to_array($query)
{
	$ary1 = explode("&", $query);
	for ($i = 0; $i < count($ary1); $i++) {
		$ary2 = explode("=", $ary1[$i]);
		if (isset($ary2[0]) && isset($ary2[1])) {
			$queries[$ary2[0]] = $ary2[1];
		}
	}

	return $queries;
}
?>
