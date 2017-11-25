#pragma once
#include <vector>
#include <string>
#include <set>
#include <Windows.h>
#include <setupapi.h>
#include "Device.h"
using namespace std;

#pragma comment(lib, "setupapi.lib")

typedef struct DEVICE_INFO
{
	SP_DEVINFO_DATA spDevInfoData;
	string classDescription;
}DEV_INFO;

class DeviceEnumerator
{

public:
	static vector<DEVICE_INFO> getDevices();
	static set<string> getDeviceTypes();
	DeviceEnumerator();
	~DeviceEnumerator();
};

