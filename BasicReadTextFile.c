#include <stdio.h>

int main(int argc, char *argv[]) {
	FILE *f;
	char data = ' ';

	if((f = fopen("data.txt", "r")) != NULL)
	{
		while(data != EOF)
		{
			putchar(data = getc(f));
		}
	}
	else
	{
		printf("Error");
		exit(1);
	}
	fclose(f);	
	
	return 0;
}


