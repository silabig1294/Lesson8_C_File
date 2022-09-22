#include <stdio.h>

int main(int argc, char *argv[]) {
	FILE *f;

	f = fopen("data.txt", "w+");
	fprintf(f, "C Programming\n");
	fputs("Step By Step\n", f);

	fclose(f);
	printf("Save data complete !!!");

	
	
	return 0;
}


