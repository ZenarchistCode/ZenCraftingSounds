modded class ActionDisinfectPlant
{
	override string GetSoundCategory(ActionData action_data)
	{
		#ifdef ZenModPack
		if (!ZenModEnabled("ZenCraftingSounds"))
			return super.GetSoundCategory(action_data);
		#endif

		return "Zen_DisinfectSpray";
	}
}