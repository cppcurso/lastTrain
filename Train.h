/*
 * Train.h
 *
 *  Created on: 13/03/2018
 *      Author: usuario
 */

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
	long moveAlong(float position)
	{
		return position+velocity*1;
	}
	void go(Stop finalStop)
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
