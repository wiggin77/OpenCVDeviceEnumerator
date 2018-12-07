#include <map>
#include <iostream>

#include "DeviceEnumerator.h"

int main()
{

	/*
		The id field of the Device struct can be used with an OpenCV VideoCapture object
	*/

	DeviceEnumerator de;

	std::cout << "[" << std::endl;

	// Audio Devices
	std::map<int, Device> devices = de.getAudioDevicesMap();

	// Print information about the devices
	for (auto const &device : devices) 
	{
		std::cout << "    { ";
		std::cout << "\"type\": \"video\", ";
		std::cout << "\"id\": " << device.first << ", ";
		std::cout << "\"name\": \"" << device.second.deviceName << "\"";
		//std::cout << "\"path\": '" << device.second.devicePath << "\"";
		std::cout << " }" << std::endl;
	}

	// Video Devices
	devices = de.getVideoDevicesMap();

	// Print information about the devices
	for (auto const &device : devices) 
	{
		std::cout << "    { ";
		std::cout << "\"type\": \"video\", ";
		std::cout << "\"id\": " << device.first << ", ";
		std::cout << "\"name\": \"" << device.second.deviceName << "\"";
		//std::cout << "\"path\": '" << device.second.devicePath << "\"";
		std::cout << " }" << std::endl;
	}
	
	std::cout << "]" << std::endl;
	std::cout << std::endl;
}

