/*
  Free Download Manager Copyright (c) 2003-2016 FreeDownloadManager.ORG
*/

#if !defined(AFX_VMSFIREFOXMONITORING_H__5A4260CA_6142_4971_8707_4D8DAD852589__INCLUDED_)
#define AFX_VMSFIREFOXMONITORING_H__5A4260CA_6142_4971_8707_4D8DAD852589__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif 

class vmsFirefoxExtensionInfo;

class vmsFirefoxMonitoring  
{
public:
	
	static bool Install(bool bInstall);
	
	static bool IsInstalled();
	
	static bool Install_OLDWAY2(bool bInstall);
	
	static bool IsInstalled_OLDWAY2();
	
	static bool Install_OLDWAY (bool bInstall);
	
	static bool IsInstalled_OLDWAY();
	
	
	static bool IsEnabledInFirefox(bool &bEnabled);
	
	static bool IsFFInstalled ();
	static bool ProfileExists();

	vmsFirefoxMonitoring();
	virtual ~vmsFirefoxMonitoring();

protected:
	static bool CheckEnabled(vmsFirefoxExtensionInfo& info,
		LPCTSTR profile, LPCTSTR file, bool& bEnabled);
	static bool CheckEnabled(vmsFirefoxExtensionInfo& info,
		LPCTSTR profile, LPCTSTR file, LPCTSTR extensionID, bool& bEnabled);
};

#endif 
