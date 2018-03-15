
#include <iostream>
#include <thread>
#include "Line.h"
#include "Train.h"
using namespace std;

void start(Train t, Stop stop)
{
    t.go(stop);
}

int main()

{
    Line line1;

    Stop stop1;
    stop1.stopName='A';
    stop1.distance=10;

    Stop stop2;
    stop2.stopName='A';
    stop2.distance=10;

    Stop stop3;
    stop2.stopName='A';
    stop2.distance=10;


    Train train1;
    train1.trainName="A";
    train1.position=0;
    train1.velocity=5;

    Train train2;
    train1.trainName="B";
    train1.position=10;
    train1.velocity=10;


      std::thread moveTrain1(start, train1, stop2);
      //std::thread moveTrain2(start, train2, );
      moveTrain1.join();
    //  moveTrain2.join();
  }
