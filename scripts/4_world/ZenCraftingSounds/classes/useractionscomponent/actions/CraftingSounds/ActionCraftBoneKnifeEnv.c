modded class ActionCraftBoneKnifeEnv
{
	override string GetSoundCategory(ActionData action_data)
	{
		#ifdef ZenModPack
		if (!ZenModEnabled("ZenCraftingSounds"))
			return super.GetSoundCategory(action_data);
		#endif

		return "Zen_Bones";
	}
}