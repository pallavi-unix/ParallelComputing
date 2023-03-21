#include <iostream>
#include <thread>
#include <stdlib.h>
#include <string>
#include <unistd.h>
#include <vector>

using namespace std;

void minion(int);
void overlord();

int main (int argc, char** argv) {
  if (argc < 2) {
    cerr<<"usage: "<<argv[0]<<" <nbminions>\n";
    return -1;
  }
  //Your code goes here
  
  int cnt = stoi(argv[1]);

  vector<thread> multiThreads;

  for(int i =0; i < cnt; i++)
  {
    multiThreads.push_back(thread (minion, (i+1)));
  }  

  for (auto& sep : multiThreads)
	sep.join();

  thread t2 (overlord);
  
  t2.join();

  return 0;
}

void minion(int cnt)
{
	cout<<"Hello! I am minion "<<cnt;
}

void overlord()
{
	cout<<"Hello Minions! I am the Overlord ";
}

