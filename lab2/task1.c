#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{
	int chisla[10];
	srand(time(NULL));
	for (int i=0; i<10; i++)
	{
		chisla[i] = rand()%10;
		printf("%d \n", chisla[i]);
	}
	return 0;

}
