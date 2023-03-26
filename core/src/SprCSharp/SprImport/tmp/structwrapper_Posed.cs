	[DllImport("SprExport.dll", CallingConvention=CallingConvention.Cdecl)]
	public static extern IntPtr Spr_PHFrameDesc_struct_get_Posed(IntPtr _ptr, int index);
	[DllImport("SprExport.dll", CallingConvention=CallingConvention.Cdecl)]
	public static extern void Spr_PHFrameDesc_struct_set_Posed(IntPtr _ptr, int index, IntPtr value);
