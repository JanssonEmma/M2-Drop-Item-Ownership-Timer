//Find:
void CPythonItem::SetOwnership(DWORD dwVID, const char * c_pszName)

//Change function definition:
#ifdef ENABLE_OWNERSHIP_DURATION_TIMER
void CPythonItem::SetOwnership(DWORD dwVID, const char * c_pszName, int iSec, bool bUpdate)
#else
void CPythonItem::SetOwnership(DWORD dwVID, const char * c_pszName)
#endif

//Find (in same function):
rkTextTail.SetItemTextTailOwner(dwVID, c_pszName);

//Change call of the function:
#ifdef ENABLE_OWNERSHIP_DURATION_TIMER
	rkTextTail.SetItemTextTailOwner(dwVID, c_pszName, iSec, bUpdate);
#else
	rkTextTail.SetItemTextTailOwner(dwVID, c_pszName);
#endif