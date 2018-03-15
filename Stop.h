
#include <iostream>
#include <mutex>
#include <chrono>
#include <thread>
#include <vector>
using namespace std;


class Stop {

public:
	string stopName;
	mutex m;
	float position;
	float breakTime = 2;
	Stop(string stopName, float position): stopName(stopName),position(position) {}
	//mutex m;


};
