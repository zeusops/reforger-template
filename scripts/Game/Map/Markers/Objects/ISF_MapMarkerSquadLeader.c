//------------------------------------------------------------------------------------------------
//! Dynamic map marker -> squad leader
modded class SCR_MapMarkerSquadLeader : SCR_MapMarkerEntity
{	
	//------------------------------------------------------------------------------------------------
	// RPL EVENTS
	//------------------------------------------------------------------------------------------------
	override void OnPlayerIdUpdate()
	{
		PlayerController pController = GetGame().GetPlayerController();
		if (!pController)
			return;
		
			SetLocalVisible(true);
	}
	
}