	[DllImport("SprExport.dll", CallingConvention=CallingConvention.Cdecl)]
	public static extern IntPtr Spr_CDShapeDesc_struct_get_PHMaterial(IntPtr _ptr, int index);
	[DllImport("SprExport.dll", CallingConvention=CallingConvention.Cdecl)]
	public static extern void Spr_CDShapeDesc_struct_set_PHMaterial(IntPtr _ptr, int index, IntPtr value);
