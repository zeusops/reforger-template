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
		
		if (m_PlayerID == pController.GetPlayerId())	// if this is us, dont display
			SetLocalVisible(true); // set this true for markers testing
		else
		{
			SetLocalVisible(true);
		}
	}
	
}