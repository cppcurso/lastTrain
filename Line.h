/*
 * Line.h
 *
 *  Created on: 13/03/2018
 *      Author: usuario
 */


#define LINE_H_
#include <vector>
#include "Stop.h"
using namespace std;

class Line {
public:
	//Line();
	string lineName;

	vector<Stop>stops;

	void findStop(string name);

	void addStop(Stop newStop, vector <Stop> &stops)
	{
		 stops.push_back(newStop);
	}


};
