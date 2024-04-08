modded class ActionMineBushByHand: ActionMineBush
{
	override string GetSoundCategory(ActionData action_data)
	{
		return "Zen_BushHands"; // why no work?
	}
}