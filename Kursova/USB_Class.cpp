#include "USB_Class.h"

namespace Kursova
{

		void USB_Device::SaveFile(IO::StreamWriter^ sw)
		{
			sw->WriteLine("Ім'я пристрою: " + VolumeName + "(" + CharFormat + ":)");
			sw->WriteLine("Формат системи: " + SysName);
			sw->WriteLine("Серійний номер: " + VSNumber);
			sw->WriteLine("Загальна місткість: " + TotalSize + " MB");
			sw->WriteLine("Доступно: " + FreeAvSize + " MB");
			if (USB_HotKey != '\0')
				sw->WriteLine("Гаряча клавіша для витягнення: CTRL + " + (WCHAR)USB_HotKey);
			sw->WriteLine("\n");
		}

		BOOL USB_Device::VolumeEject(String^ CharNameObj)
		{
			try
			{
				if (CharFormat != CharNameObj)
					return FALSE;

				if (USB_Handle == INVALID_HANDLE_VALUE)
					return FALSE;

				if (LockVolume(USB_Handle) && DismountVolume(USB_Handle)) 
				{
					if(PreventRemovalOfVolume(USB_Handle, FALSE) && AutoEjectVolume(USB_Handle))
					{
						if (!CloseHandle(USB_Handle))
							return FALSE;
					}
					return TRUE;
				}
				else return FALSE;
			}
			catch(...)
			{
				return FALSE;
			}
		}

		BOOL USB_Device::LockVolume(HANDLE hVolume)
		{
			DWORD dwBytesReturned;

			if (DeviceIoControl(hVolume,
								FSCTL_LOCK_VOLUME,
								NULL, 0,
								NULL, 0,
								&dwBytesReturned,
								NULL))
				return TRUE;
			dwBytesReturned = GetLastError();
			return FALSE;
		}

		BOOL USB_Device::DismountVolume(HANDLE hVolume)
		{
			DWORD dwBytesReturned;

			return DeviceIoControl( hVolume,
									FSCTL_DISMOUNT_VOLUME,
									NULL, 0,
									NULL, 0,
									&dwBytesReturned,
									NULL);
		}

		BOOL USB_Device::PreventRemovalOfVolume(HANDLE hVolume, BOOL fPreventRemoval)
		{
			DWORD dwBytesReturned;
			PREVENT_MEDIA_REMOVAL PMRBuffer;

			PMRBuffer.PreventMediaRemoval = fPreventRemoval;

			return DeviceIoControl( hVolume,
									IOCTL_STORAGE_MEDIA_REMOVAL,
									&PMRBuffer, sizeof(PREVENT_MEDIA_REMOVAL),
									NULL, 0,
									&dwBytesReturned,
									NULL);
		}

		BOOL USB_Device::AutoEjectVolume(HANDLE hVolume)
		{
			DWORD dwBytesReturned;

			return DeviceIoControl( hVolume,
									IOCTL_STORAGE_EJECT_MEDIA,
									NULL, 0,
									NULL, 0,
									&dwBytesReturned,
									NULL);
		}

		int USB_Device::GetHotKey()
		{
			return (int)USB_HotKey;
		}
		WCHAR USB_Device::GetHotKeyWChar()
		{
			return USB_HotKey;
		}
		void USB_Device::SetHotKey(String^ HK)
		{
			using namespace Runtime::InteropServices;
			const char* chars = 
			(const char*)(Marshal::StringToHGlobalAnsi(HK)).ToPointer();
			USB_HotKey = chars[0];
		}
		String^ USB_Device::GetNameCharFormat()
		{
			return CharFormat;
		}
		String^ USB_Device::GetNameListForm()
		{
			return Convert::ToString(VolumeName + "(" + CharFormat + ":)");
		}
		DWORD USB_Device::GetSerialNumber()
		{
			return VSNumber;
		}
		Void USB_Device::Close()
		{
			CloseHandle(USB_Handle);
		}
		unsigned int USB_Device::GetTotalSize()
		{
			return (unsigned int)TotalSize;
		}
		unsigned int USB_Device::GetFreeSize()
		{
			return (unsigned int)FreeAvSize;
		}
		String^ USB_Device::GetSysName()
		{
			return SysName;
		}
}