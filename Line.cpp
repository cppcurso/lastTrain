/*
 * Line.cpp
 *
 *  Created on: 13/03/2018
 *      Author: usuario
 */

#include "Line.h"

Line::Line() {
}

void Line::addStop(string name, float distance){
	Stop stop;
	cout << "Insert name of the new stop: ";
	cin >> stop.name;
	cout << "Insert distance of the new stop: ";
	cin >> stop.distance;
	stops.push_back(stop);

}

Stop* Line::findStop(string name){
	for (float int i = 0; i < stops.size(); i++) {
	     	 if(stops.name==this->name) return stop;
	    }
}





