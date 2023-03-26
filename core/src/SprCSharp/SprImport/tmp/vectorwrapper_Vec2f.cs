	[DllImport("SprExport.dll", CallingConvention=CallingConvention.Cdecl)]
	public static extern IntPtr Spr_vector_new_Vec2f();
	[DllImport("SprExport.dll", CallingConvention=CallingConvention.Cdecl)]
	public static extern void Spr_vector_delete_Vec2f(IntPtr _ptr);
	[DllImport("SprExport.dll", CallingConvention=CallingConvention.Cdecl)]
	public static extern IntPtr Spr_vector_get_Vec2f(IntPtr _ptr, int index);
	[DllImport("SprExport.dll", CallingConvention=CallingConvention.Cdecl)]
	public static extern void Spr_vector_set_Vec2f(IntPtr _ptr, int index, IntPtr value);
	[DllImport("SprExport.dll", CallingConvention=CallingConvention.Cdecl)]
	public static extern int Spr_vector_size_Vec2f(IntPtr _ptr);
	[DllImport("SprExport.dll", CallingConvention=CallingConvention.Cdecl)]
	public static extern void Spr_vector_push_back_Vec2f(IntPtr _ptr, IntPtr value);
	[DllImport("SprExport.dll", CallingConvention=CallingConvention.Cdecl)]
	public static extern void Spr_vector_clear_Vec2f(IntPtr _ptr);
