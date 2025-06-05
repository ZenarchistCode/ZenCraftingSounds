modded class ActionCraftBolts
{
	override string GetSoundCategory(ActionData action_data)
	{
		#ifdef ZENMODPACK
		if (!ZenModEnabled("ZenCraftingSounds"))
			return super.GetSoundCategory(action_data);
		#endif

		return "Zen_CraftBolts";
	}
}