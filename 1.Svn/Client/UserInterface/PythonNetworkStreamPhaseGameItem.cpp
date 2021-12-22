//Find (in function bool CPythonNetworkStream::RecvItemOwnership()):
	CPythonItem::Instance().SetOwnership(p.dwVID, p.szName);
	
//Modify the function call:
#ifdef ENABLE_OWNERSHIP_DURATION_TIMER
	CPythonItem::Instance().SetOwnership(p.dwVID, p.szName, p.iSec, p.bUpdate);
#else
	CPythonItem::Instance().SetOwnership(p.dwVID, p.szName);
#endif