#include "Sensor.h"

#include "Constants.h"

namespace st
{
//private


//public
	//constructor
	Sensor::Sensor(byte id):
		Device(id)
	{
	
	}
	
	//destructor
	Sensor::~Sensor()
	{
	
	}
	
	const String& Sensor::beSmart(const String &str)
	{
		//Each derived class should implement this if they are interfacing with SmartThings over the internet.
		return Constants::IGNORE_STRING;
	}

}