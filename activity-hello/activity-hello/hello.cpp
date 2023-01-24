int main () {

	int myHostName;
	char myHostSize[100];

	myHostName =  gethostname(myHostSize , sizeof(myHostSize));

	printf("Hostname = %d\t\n",myHostName);

	return 0;
}
