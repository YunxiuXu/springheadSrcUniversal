	[DllImport("SprExport.dll", CallingConvention=CallingConvention.Cdecl)]
	public static extern IntPtr Spr_vector_new_HISpidarMotorDesc();
	[DllImport("SprExport.dll", CallingConvention=CallingConvention.Cdecl)]
	public static extern void Spr_vector_delete_HISpidarMotorDesc(IntPtr _ptr);
	[DllImport("SprExport.dll", CallingConvention=CallingConvention.Cdecl)]
	public static extern IntPtr Spr_vector_get_HISpidarMotorDesc(IntPtr _ptr, int index);
	[DllImport("SprExport.dll", CallingConvention=CallingConvention.Cdecl)]
	public static extern void Spr_vector_set_HISpidarMotorDesc(IntPtr _ptr, int index, IntPtr value);
	[DllImport("SprExport.dll", CallingConvention=CallingConvention.Cdecl)]
	public static extern int Spr_vector_size_HISpidarMotorDesc(IntPtr _ptr);
	[DllImport("SprExport.dll", CallingConvention=CallingConvention.Cdecl)]
	public static extern void Spr_vector_push_back_HISpidarMotorDesc(IntPtr _ptr, IntPtr value);
	[DllImport("SprExport.dll", CallingConvention=CallingConvention.Cdecl)]
	public static extern void Spr_vector_clear_HISpidarMotorDesc(IntPtr _ptr);
