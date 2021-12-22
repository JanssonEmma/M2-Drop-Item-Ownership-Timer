//Find:
		void		SetOwnershipEvent(LPEVENT pkEvent);
		
//Add below:
#ifdef ENABLE_OWNERSHIP_DURATION_TIMER
		void		SetUpdateOwnershipEvent(LPEVENT pkEvent);
		LPEVENT		GetOwnershipEvent() { return m_pkOwnershipEvent; }
		LPEVENT		GetUpdateOwnershipEvent() { return m_pkUpdateOwnershipEvent; }
		int			GetOwnershipDuration() { return m_iSec; }
#endif

//Find:
		DWORD		m_dwSIGVnum;
		
//Add below:
#ifdef ENABLE_OWNERSHIP_DURATION_TIMER
		int			m_iSec = 30;
		LPEVENT		m_pkUpdateOwnershipEvent;
#endif

//Find:
EVENTINFO(item_vid_event_info)

//Add before:
#ifdef ENABLE_OWNERSHIP_DURATION_TIMER
EVENTINFO(update_ownership_info)
{
	LPITEM item;
	char szOwnerName[CHARACTER_NAME_MAX_LEN];

	update_ownership_info()
	: item(0)
	{
		::memset(szOwnerName, 0, CHARACTER_NAME_MAX_LEN);
	}
};
#endif