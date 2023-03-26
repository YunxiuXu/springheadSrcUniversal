	[DllImport("SprExport.dll", CallingConvention=CallingConvention.Cdecl)]
	public static extern IntPtr Spr_vector_new_PHSplineLimitNode();
	[DllImport("SprExport.dll", CallingConvention=CallingConvention.Cdecl)]
	public static extern void Spr_vector_delete_PHSplineLimitNode(IntPtr _ptr);
	[DllImport("SprExport.dll", CallingConvention=CallingConvention.Cdecl)]
	public static extern IntPtr Spr_vector_get_PHSplineLimitNode(IntPtr _ptr, int index);
	[DllImport("SprExport.dll", CallingConvention=CallingConvention.Cdecl)]
	public static extern void Spr_vector_set_PHSplineLimitNode(IntPtr _ptr, int index, IntPtr value);
	[DllImport("SprExport.dll", CallingConvention=CallingConvention.Cdecl)]
	public static extern int Spr_vector_size_PHSplineLimitNode(IntPtr _ptr);
	[DllImport("SprExport.dll", CallingConvention=CallingConvention.Cdecl)]
	public static extern void Spr_vector_push_back_PHSplineLimitNode(IntPtr _ptr, IntPtr value);
	[DllImport("SprExport.dll", CallingConvention=CallingConvention.Cdecl)]
	public static extern void Spr_vector_clear_PHSplineLimitNode(IntPtr _ptr);
