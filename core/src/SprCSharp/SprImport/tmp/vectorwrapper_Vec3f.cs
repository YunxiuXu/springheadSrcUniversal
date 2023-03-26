	[DllImport("SprExport.dll", CallingConvention=CallingConvention.Cdecl)]
	public static extern IntPtr Spr_vector_new_Vec3f();
	[DllImport("SprExport.dll", CallingConvention=CallingConvention.Cdecl)]
	public static extern void Spr_vector_delete_Vec3f(IntPtr _ptr);
	[DllImport("SprExport.dll", CallingConvention=CallingConvention.Cdecl)]
	public static extern IntPtr Spr_vector_get_Vec3f(IntPtr _ptr, int index);
	[DllImport("SprExport.dll", CallingConvention=CallingConvention.Cdecl)]
	public static extern void Spr_vector_set_Vec3f(IntPtr _ptr, int index, IntPtr value);
	[DllImport("SprExport.dll", CallingConvention=CallingConvention.Cdecl)]
	public static extern int Spr_vector_size_Vec3f(IntPtr _ptr);
	[DllImport("SprExport.dll", CallingConvention=CallingConvention.Cdecl)]
	public static extern void Spr_vector_push_back_Vec3f(IntPtr _ptr, IntPtr value);
	[DllImport("SprExport.dll", CallingConvention=CallingConvention.Cdecl)]
	public static extern void Spr_vector_clear_Vec3f(IntPtr _ptr);
