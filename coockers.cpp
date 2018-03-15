#include <iostream>
#include <thread>
#include <unistd.h>
#include <sstream>
#include <chrono>
#include <stdlib.h>
#include <mutex>
using namespace std;
mutex mtxOven, mtxKnife;


void cutMutex(char cooker)
{
      lock_guard<mutex> guard(mtxOven);
      int tCut = rand() % 7;
      cout<<"I'm "<<cooker<<" and I'll cut during "<< tCut <<endl;
      cout<<"I'm cutting " <<endl;
      sleep(tCut);
}
void bakeMutex(char cooker)
{
  lock_guard<mutex> guard(mtxBake);
  int tOven= rand() % 3;
  cout<<"I'm "<<cooker<<" and I'll bake during "<< tOven <<endl;
  cout<<" I'm baking " <<endl;
  sleep(tOven);
}

void workMutex(char cooker)
{
  cutMutex(cooker);
  bakeMutex(cooker);
}
int main() {

  bool cutOrder[3]={true, false, true};
  thread coocker1(workMutex,'A');
  thread coocker2(workMutex,'B');

    coocker1.join();
    coocker2.join();
}
