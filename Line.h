/*
 * Line.h
 *
 *  Created on: 13/03/2018
 *      Author: usuario
 */

#ifndef LINE_H_
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
};


#endif /* LINE_H_ */
