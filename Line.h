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
	Line();
	vector<Stop>stops;
	void addStop(string name, float position);
	void findStop(string name);

	void addStop(string name, float distance)
	{
		cout << "Insert name of the new stop: ";
		cin >> stop.stopName;
		cout << "Insert distance of the new stop: ";
		cin >> stop.position;
		stops.push_back(stop);
	}


};
