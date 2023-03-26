	[DllImport("SprExport.dll", CallingConvention=CallingConvention.Cdecl)]
	public static extern IntPtr Spr_GRVertexArray_struct_get_GRVertexElement(IntPtr _ptr, int index);
	[DllImport("SprExport.dll", CallingConvention=CallingConvention.Cdecl)]
	public static extern void Spr_GRVertexArray_struct_set_GRVertexElement(IntPtr _ptr, int index, IntPtr value);
