modded class ActionBurnSewSelf
{
	override string GetSoundCategory(ActionData action_data)
	{
		#ifdef ZENMODPACK
		if (!ZenModEnabled("ZenCraftingSounds"))
			return super.GetSoundCategory(action_data);
		#endif

		if (action_data.m_Player && action_data.m_Player.IsMale())
			return "Zen_PainMale";
		else
			return "Zen_PainFemale";
	}
}

modded class ActionBurnSewTarget
{
	override string GetSoundCategory(ActionData action_data)
	{
		#ifdef ZENMODPACK
		if (!ZenModEnabled("ZenCraftingSounds"))
			return super.GetSoundCategory(action_data);
		#endif

		PlayerBase target = PlayerBase.Cast(action_data.m_Target.GetObject());

		if (target && target.IsMale())
			return "Zen_PainMale";
		else
			return "Zen_PainFemale";
	}
}