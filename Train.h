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
using namespace std;


class Train {
public:
	int currentStop;
	string trainName;
	long position;
	int velocity;
	float count;
	bool moving=false;
	Train();

	void go(Stop finalStop);
	long moveAlong(float position);
	long Train::moveAlong(float position)
	{
		return position+velocity*1;
	}
	void Train::go(Stop finalStop)
	{
		moving=true;
		if (position==finalStop.position)
		{
			for( int i=0; i<finalStop.breakTime;i++)
			{
				sleep(1);
				moving=false;
			}
			position=moveAlong(position);
			moving=true;
		}
		position=moveAlong(position);
	}


};
