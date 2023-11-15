#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{
	int n;
	scanf("%d",&n);
	float chisla[n];
	srand(time(NULL));
	for (int i=0; i<n; i++)
	{
		chisla[i] =(float)rand()/RAND_MAX;
		printf("%f \n", chisla[i]);
	}
	return 0;

}
