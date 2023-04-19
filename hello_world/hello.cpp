#include <mpi.h>
#include <unistd.h>
#include <iostream>

using namespace std;

int main(int argc, char*argv[]) 
{
	int a;
	int b;
  	int c;

  	char system[MPI_MAX_PROCESSOR_NAME];
  
	MPI_Init(NULL, NULL);

	MPI_Comm_rank(MPI_COMM_WORLD, &a);
	MPI_Comm_size(MPI_COMM_WORLD, &b);
	MPI_Get_processor_name( system, &c);

	cout<<"I am a process: "<<a<<" out of: "<<b<<" I am running on "<<system<<"\n";
	MPI_Finalize();
	
	return 0;
}
