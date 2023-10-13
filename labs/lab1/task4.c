#include <stdio.h>
int main()
{
	float  a, b, c, x;
	printf ("yravnenie vida ax+b=c, vvedite a,b,c");
	scanf ("%f", &a);
	scanf ("%f", &b);
	scanf ("%f", &c);
	x = (c-b)/a;
	printf("x = %f \n", x);
	
}
