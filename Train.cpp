/*
 * Train.cpp
 *
 *  Created on: 13/03/2018
 *      Author: usuario
 */

#include "Train.h"
#include <unistd.h>
using namespace std;

Train::Train() {}

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
