#include <iostream>
#include <thread>
#include <stdlib.h>
#include <string>
#include <unistd.h>

using namespace std;

void minion();
void overlord();

int main (int argc, char** argv) {
  if (argc < 2) {
    std::cerr<<"usage: "<<argv[0]<<" <nbminions>\n";
    return -1;
  }
  //Your code goes here
  
  int cnt = std::stoi(argv[1]);

  for(int i =0; i < cnt; i++)
  {
    std::thread t1 (minion);
    t1.join();
  }  

  std::thread myThread2 (overlord);
  
  myThread2.join();

  return 0;
}

void minion()
{
	std::cout<<"Hello! I am minion ";
}

void overlord()
{
	std::cout<<"Hello Minions! I am the Overlord ";
}

