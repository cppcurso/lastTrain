/*
 * Stop.cpp
 *
 *  Created on: 13/03/2018
 *      Author: usuario
 */

#include "Stop.h"

Stop::Stop(string stopName, float position): stopName(stopName),position(position) {}

// Position
float Stop::getPosition()
{
  return position;
}

// StopName
string Stop::getStopName()
{
  return stopName;
}

void Stop::createStopName() {
	//Stop stopName;
	//stopName = "Inicio";
	//stopName = "Medio";
	//stopName = "FInal";
}

void Stop::print() {
   std::cout << "Stop: " << Stop::getStopName() << std::endl;
   std::cout << "Position: " << Stop::getPosition() << std::endl;
}
