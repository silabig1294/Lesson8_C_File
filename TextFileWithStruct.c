#include <stdio.h>

struct Customer {
	int CustomerID; 
	char FullName[50];
};

int main(int argc, char *argv[]) {
	FILE *f;

	f = fopen("data.txt","w");
	if(f == NULL)
	{
		printf("Can not open Sample.txt");
	}
	else
	{
		struct Customer c; 
		c.CustomerID = 111;
		strcpy(c.FullName,"Suphachai Somphanit");

		fprintf(f,"%d\t %s", c.CustomerID, c.FullName);
		fclose(f);
		printf("Complete !!!");
	}	
	
	return 0;
}


