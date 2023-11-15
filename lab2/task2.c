#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{
	FILE*filename = fopen("data2.txt", "w"); 
	int chisla[10];
	srand(time(NULL));
	for (int i=0; i<10; i++)
	{
		chisla[i] = rand()%10;
		printf("%d \n", chisla[i]);
	}
        for (int i=9; i>=0; i--)
	{	
		fprintf(filename, "%d", chisla[i]);
	
	}
	fprintf(filename,"\n");
	fclose(filename);
	return 0;
}
