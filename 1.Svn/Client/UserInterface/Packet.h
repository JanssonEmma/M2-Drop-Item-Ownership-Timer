//Find
typedef struct packet_item_ownership
{
    BYTE        bHeader;
    DWORD       dwVID;
    char        szName[CHARACTER_NAME_MAX_LEN + 1];
} TPacketGCItemOwnership;

//Extend the struct
typedef struct packet_item_ownership
{
    BYTE        bHeader;
    DWORD       dwVID;
    char        szName[CHARACTER_NAME_MAX_LEN + 1];
#ifdef ENABLE_OWNERSHIP_DURATION_TIMER
	int			iSec;
	bool		bUpdate;
#endif
} TPacketGCItemOwnership;