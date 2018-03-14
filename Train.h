/*
 * Train.h
 *
 *  Created on: 13/03/2018
 *      Author: usuario
 */

#ifndef TRAIN_H_
#define TRAIN_H_
#include<iostream>
#include<thread>
#include"Stop.cpp"
using namespace std;


class Train {
public:
	int currentStop;
	string trainName;
	long position=0;
	int velocity;
	float count;
	bool moving=false;
	Train();

	void go(Stop finalStop);
	long moveAlong(float position);

};

#endif /* TRAIN_H_ */
