#include "Crew.h"
#include "Pilot.h"
#include "FlightAttendant.h"

Crew::Crew(std::string name)
{
	this->name = name;
}

int Crew::getBaggageWeight()
{
	return 0;
}

bool Crew::isReady()
{
	int countPilot = 2;
	int countAttendant = 6;
	for (int i = 0; i < this->persons.size(); i++)
	{
		Pilot* p = dynamic_cast<Pilot*>(persons[i]);
		if ( p != nullptr)
		{
			countPilot--;
		}
		FlightAttendant* fa = dynamic_cast<FlightAttendant*>(persons[i]);
		if (fa != nullptr)
		{
			countAttendant--;
		}
	}
	
	return countPilot == 0 && countAttendant==0;
}

void Crew::output()
{
	std::cout << "Crew: " << this->name << std::endl ;
	for (int i = 0; i < persons.size(); i++)
	{
		persons[i]->output();
	}
}

void Crew::removeOverload(int * weightToRemove)
{
}

void Crew::addComponent(FlightComponent * component)
{
	persons.push_back(component);
}
