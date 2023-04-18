#include <mpi.h>
#include <unistd.h>
#include <iostream>

int main(int argc, char*argv[]) 
{
	int rank;
	int size;
  	int length;
  	char machine[MPI_MAX_PROCESSOR_NAME];
  
	MPI_Init(NULL, NULL);

	MPI_Comm_rank(MPI_COMM_WORLD, &rank);
	MPI_Comm_size(MPI_COMM_WORLD, &size);
	MPI_Get_processor_name( machine, &length);
	cout<<"I am a process: "<<rank<<" out of: "<<size<<" I am running on "<<machine<<"\n";
	MPI_Finalize();
	
	return 0;
}
