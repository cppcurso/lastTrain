/*
 * Train.h
 *
 *  Created on: 13/03/2018
 *      Author: usuario
 */

#include<iostream>
#include <unistd.h>
#include<thread>
#include"Stop.h"
#include "Line.h"
using namespace std;


class Train {
public:
	string trainName;
	long position;
	Train(string trainName, float position): trainName(trainName),position(position) {}
	Line* line1 = new Line("toMadrid");
	int currentStop;
	int velocity;
	bool moving=false;

	bool ArrivedAtStop(int newposition)
	{
		int i=0;
		Stop* stop;
		stop = line1->stops[i];
		if (newposition==stop->position)
		{
			 return true;
			 i++;
		 }
		return false;
	}

	long moveAlong(float position)
	{
		return position+velocity*1;
	}

	void go(Stop* finalStop)
	{
		do{
			moving=true;
			if (ArrivedAtStop(position))
				{
					for( int i=0; i<finalStop->breakTime;i++)
					{
						sleep(1);
						moving=false;
					}
			position=moveAlong(position);
			moving=true;
			}
		}
	while(position<finalStop->position);

		position=moveAlong(position);
}
};
