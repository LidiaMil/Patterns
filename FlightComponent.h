#pragma once
#include <assert.h>
class FlightComponent
{
public:
	virtual int getBaggageWeight() =  0;
	virtual bool isReady() 
	{
		return true;
	}
	virtual void output() = 0;
	virtual void removeOverload(int* weightToRemove) = 0;
	virtual void addComponent(FlightComponent* component)
	{
		assert(false);
	}
	virtual ~FlightComponent() {};
};

