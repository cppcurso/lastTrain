
#include<iostream>
#include<thread>
#include"Line.cpp"
#include"Train.cpp"
using namespace std;

void checkState( Train train)
	if (train.moving==false)
	{
		cout<<"Here "<<train.name<<"I'm in the km "<< train.position<<end;
	}
	else
	{
		cout<<"Here "<<train.name<<"I'm taking a break in "<<end;
	}

int main()
{
    Train train1;
    train1.trainName="El Madrileño";
    train1.position=0;
    train1.velocity=5;
}
