//Find
		void	SetOwnership(DWORD dwVID, const char * c_pszName);
		
//Change declaration
#ifdef ENABLE_OWNERSHIP_DURATION_TIMER
		void	SetOwnership(DWORD dwVID, const char* c_pszName, int iSec, bool bUpdate);
#else
		void	SetOwnership(DWORD dwVID, const char * c_pszName);
#endif