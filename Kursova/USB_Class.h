#pragma once
#include "windows.h"

namespace Kursova
{
	using namespace System;
	using namespace System::Windows::Forms;
	using namespace System::IO;

	public ref class USB_Device
	{
	private:
		LPCTSTR RootFormat;      //  "X:\\"
		LPCTSTR VolumeFormat;    //  "\\\\.\\X:"
		String^	CharFormat;      //  "X"
		HANDLE  USB_Handle;
		String^ VolumeName;
		String^ SysName;
		DWORD	VSNumber;		 //  VolumeSerialNumber
		DWORD	MCLength;		 //  MaximumComponentLength
		CHAR	USB_HotKey;		 //  HotKey for ejecting
		DWORD	FreeAvSize;		 //	 Available for user volume size 
		DWORD	TotalSize;		 //  Total volume size

	public:
		USB_Device(LPCTSTR RF, LPCTSTR VF, String^ CF, HANDLE h, String^ VN, String^ SN, DWORD VSN, DWORD MCL, CHAR HK, DWORD FS, DWORD TS):
			RootFormat(RF), VolumeFormat(VF), CharFormat(CF), USB_Handle(h), VolumeName(VN), SysName(SN), VSNumber(VSN), MCLength(MCL), USB_HotKey(HK), FreeAvSize(FS), TotalSize(TS)
		{
		}
		~USB_Device()
		{
		}

		void	SaveFile(IO::StreamWriter^ sw);
		BOOL	VolumeEject(String^ CharNameObj);
		BOOL	LockVolume(HANDLE hVolume);
		BOOL	DismountVolume(HANDLE hVolume);
		BOOL	PreventRemovalOfVolume(HANDLE hVolume, BOOL fPreventRemoval);
		BOOL	AutoEjectVolume(HANDLE hVolume);
		int		GetHotKey();
		WCHAR	GetHotKeyWChar();
		void	SetHotKey(String^ HK);
		String^ GetNameCharFormat();
		String^ GetNameListForm();
		String^ GetSysName();
		DWORD	GetSerialNumber();
		Void	Close();
		unsigned int GetTotalSize();
		unsigned int GetFreeSize();
	};

}