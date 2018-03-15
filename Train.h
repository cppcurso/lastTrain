/*
 * Train.h
 *
 *  Created on: 13/03/2018
 *      Author: usuario
 */

#include<iostream>
#include <unistd.h>
#include<thread>
using namespace std;


class Train {
public:
	//Train();
	int currentStop;
	string trainName;
	long position;
	int velocity;
	float count;
	bool moving=false;

	long moveAlong(float position)
	{
		return position+velocity*1;
	}
	void go(Stop finalStop)
	{
		moving=true;
		if (position==finalStop.distance)
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
