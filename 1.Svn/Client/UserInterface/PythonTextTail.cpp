//Find:
void CPythonTextTail::SetItemTextTailOwner(DWORD dwVID, const char * c_szName)

//Change function definition:
#ifdef ENABLE_OWNERSHIP_DURATION_TIMER
void CPythonTextTail::SetItemTextTailOwner(DWORD dwVID, const char* c_szName, int iSec, bool bUpdate)
#else
void CPythonTextTail::SetItemTextTailOwner(DWORD dwVID, const char * c_szName)
#endif

//Find (in same function):
	if (strlen(c_szName) > 0)
	{
		if (!pTextTail->pOwnerTextInstance)
		{
			pTextTail->pOwnerTextInstance = CGraphicTextInstance::New();
		}
		
//Add an else branch below:
#ifdef ENABLE_OWNERSHIP_DURATION_TIMER
		else
		{
			CGraphicTextInstance::Delete(pTextTail->pOwnerTextInstance);
			pTextTail->pOwnerTextInstance = NULL;
			pTextTail->pOwnerTextInstance = CGraphicTextInstance::New();
		}
#endif

//Find (in same function):
		std::string strName = c_szName;
		static const string & strOwnership = ApplicationStringTable_GetString(IDS_POSSESSIVE_MORPHENE) == "" ? "'s" : ApplicationStringTable_GetString(IDS_POSSESSIVE_MORPHENE);
		strName += strOwnership;
		
//Add below:
#ifdef ENABLE_OWNERSHIP_DURATION_TIMER
		strName += " ( " + to_string(iSec) + "s )";
#endif

//Find (in same function):
		int xOwnerSize, yOwnerSize;
		pTextTail->pOwnerTextInstance->GetTextSize(&xOwnerSize, &yOwnerSize);
		pTextTail->yStart	= -2.0f;
		pTextTail->yEnd		+= float(yOwnerSize + 4);
		pTextTail->xStart	= fMIN(pTextTail->xStart, float(-xOwnerSize / 2 - 1));
		pTextTail->xEnd		= fMAX(pTextTail->xEnd, float(xOwnerSize / 2 + 1));
		
//Change assignment of pTextTail->yEnd:
		int xOwnerSize, yOwnerSize;
		pTextTail->pOwnerTextInstance->GetTextSize(&xOwnerSize, &yOwnerSize);
		pTextTail->yStart	= -2.0f;
#ifdef ENABLE_OWNERSHIP_DURATION_TIMER
		if (!bUpdate)
		{
			pTextTail->yEnd += float(yOwnerSize + 4);
		}
#else
		pTextTail->yEnd		+= float(yOwnerSize + 4);
#endif
		pTextTail->xStart	= fMIN(pTextTail->xStart, float(-xOwnerSize / 2 - 1));
		pTextTail->xEnd		= fMAX(pTextTail->xEnd, float(xOwnerSize / 2 + 1));