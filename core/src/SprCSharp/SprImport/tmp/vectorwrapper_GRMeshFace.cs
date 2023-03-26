	[DllImport("SprExport.dll", CallingConvention=CallingConvention.Cdecl)]
	public static extern IntPtr Spr_vector_new_GRMeshFace();
	[DllImport("SprExport.dll", CallingConvention=CallingConvention.Cdecl)]
	public static extern void Spr_vector_delete_GRMeshFace(IntPtr _ptr);
	[DllImport("SprExport.dll", CallingConvention=CallingConvention.Cdecl)]
	public static extern IntPtr Spr_vector_get_GRMeshFace(IntPtr _ptr, int index);
	[DllImport("SprExport.dll", CallingConvention=CallingConvention.Cdecl)]
	public static extern void Spr_vector_set_GRMeshFace(IntPtr _ptr, int index, IntPtr value);
	[DllImport("SprExport.dll", CallingConvention=CallingConvention.Cdecl)]
	public static extern int Spr_vector_size_GRMeshFace(IntPtr _ptr);
	[DllImport("SprExport.dll", CallingConvention=CallingConvention.Cdecl)]
	public static extern void Spr_vector_push_back_GRMeshFace(IntPtr _ptr, IntPtr value);
	[DllImport("SprExport.dll", CallingConvention=CallingConvention.Cdecl)]
	public static extern void Spr_vector_clear_GRMeshFace(IntPtr _ptr);
