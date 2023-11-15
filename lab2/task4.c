#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Shell(int n, float mass[])
{
	int i, j, step;
	float tmp;
 	for (step = n/2; step > 0; step /=2)
	{
		for(i = step; i<n; i++)
		{
			tmp = mass[i];
			for (j = i; j>=step; j-=step)
			{
				if (tmp < mass[j - step])
				{
					mass[j] = mass[j - step];
		
				}
				else
				{
				break;
				}
			}
			mass[j] = tmp;
		}
	}
} 

int main(void)
{
	int n, a, b;
	printf("Vvedite razmer massiva");
	scanf("%d",&n);
	printf ("\n");
	printf("Vvedite otrezok");
	printf("\n");
	scanf("%d", &a);
	scanf("%d", &b);
	float chisla[n];
	srand(time(NULL));
	for (int i=0; i<n; i++)
	{
		chisla[i] = (float)rand()/RAND_MAX*(b-a)+a;
		printf("%f \n", chisla[i]);
	}
	Shell(n, chisla);

	FILE*file = fopen("data4.txt", "w");

	for (int j = 0; j<n; j++)
	{
		fprintf(file, "%f \n", chisla[j]);

        }
	fprintf(file, "\n");
	fclose(file);
}




