/*
 * Stop.h
 *
 *  Created on: 13/03/2018
 *      Author: usuario
 */
#include <iostream>
#ifndef STOP_H_
#define STOP_H_
using namespace std;

class Stop {

public:
	string stopName;
	float position;
	float breakTime = 600;

Stop(string stopName, float position);
float getPosition();
string getStopName();
void createStopName();
void print();
};

#endif /* STOP_H_ */
