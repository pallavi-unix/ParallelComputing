#include<stdio.h>
#include<unistd.h>

int main () {

	char myHostName[100];

	gethostname(myHostName , sizeof(myHostName));

	printf("Hostname = %s\t\n",myHostName);

	return 0;
}
