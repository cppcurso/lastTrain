/*
 * Stop.h
 *
 *  Created on: 13/03/2018
 *      Author: usuario
 */
#include <iostream>

#define STOP_H_
using namespace std;

class Stop {

public:
	string stopName;
	float distance;
	float breakTime = 6;

Stop(string stopName, float position): stopName(stopName),distance(distance) {}

};
