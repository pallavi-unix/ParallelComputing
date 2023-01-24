#include<stdio.h>
#include<unistd.h>

int main () {
	char myHostName[100];
	gethostname(myHostName, size(myHostName));
	printf("Hostname = %s\t\n", myHostName);
	
	return 0;
}
