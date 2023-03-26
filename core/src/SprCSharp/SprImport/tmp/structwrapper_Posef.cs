	[DllImport("SprExport.dll", CallingConvention=CallingConvention.Cdecl)]
	public static extern IntPtr Spr_PHOpHapticControllerDesc_struct_get_Posef(IntPtr _ptr, int index);
	[DllImport("SprExport.dll", CallingConvention=CallingConvention.Cdecl)]
	public static extern void Spr_PHOpHapticControllerDesc_struct_set_Posef(IntPtr _ptr, int index, IntPtr value);
