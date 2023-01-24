#include <iostream>
#include <cmath>
#include <cstdlib>
#include <chrono>
#include <time.h>

#ifdef __cplusplus
extern "C" {
#endif

float f1(float x, int intensity);
float f2(float x, int intensity);
float f3(float x, int intensity);
float f4(float x, int intensity);

#ifdef __cplusplus
}
#endif

 
int main (int argc, char* argv[]) {

  if (argc < 6) {
    std::cerr<<"usage: "<<argv[0]<<" <functionid> <a> <b> <n> <intensity>"<<std::endl;
    return 0;
  }
 
  int funID = atoi(argv[1]);
  double a = atof(argv[2]);  
  double b = atof(argv[3]);
  long n = atol(argv[4]);
  int intensity = atoi(argv[5]);
  double result = 0.0;
  clock_t start = clock();
  long count;

  for(count=0; count<n; count++)
  {
double x = a+(count+0.5)*(b-a)/n;
switch(funID)
{
case 1:
result += f1(x, intensity);
break;

case 2:
result += f2(x, intensity);
break;

case 3:
result += f3(x, intensity);
break;

case 4:
result += f4(x, intensity);
break;
}
  }

  result *= (b-a)/n;
  printf("%f\n",result);
  clock_t end = clock();
  fprintf(stderr,"%f\n",(double)(end - start)/CLOCKS_PER_SEC);

  return 0;
}
