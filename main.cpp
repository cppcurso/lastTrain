
#include <iostream>
#include <thread>
#include "Train.h"
using namespace std;

void start(Train* train, Stop* stop)
{
    train->go(stop);
}

int main()

{
    Line* line1= new Line("C4");


    Stop* stop1=new Stop("A",12);
    line1->stops.push_back(stop1);
    Stop* stop2=new Stop("B",24);
    line1->stops.push_back(stop2);
    Stop* stop3=new Stop("C",36);
    line1->stops.push_back(stop3);

    Train* train1= new Train("UNO",0);
    Train* train2= new Train("TWO",0);
    train1->line1=line1;
    train2->line1=line1;

    std::thread moveTrain1(start, train1, stop2);
    std::thread moveTrain2(start, train2, stop2);
    moveTrain1.join();
    moveTrain2.join();
  }
