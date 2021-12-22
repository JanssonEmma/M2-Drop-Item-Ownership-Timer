//Find:
		void SetItemTextTailOwner(DWORD dwVID, const char * c_szName);
		
//Change function declaration:
#ifdef ENABLE_OWNERSHIP_DURATION_TIMER
		void SetItemTextTailOwner(DWORD dwVID, const char* c_szName, int iSec, bool bUpdate);
#else
		void SetItemTextTailOwner(DWORD dwVID, const char * c_szName);
#endif