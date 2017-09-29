#include <stdlib.h>
#include <stdio.h>
#include <math.h>




int main()
{

	float i,j,l = 0,m = 0;


	for(i=0; i < 101; i++)
	{
		m  += i;
		l += pow(i, 2);
	}
	m = pow(m, 2);
	m = m-l;

	printf("%lf\n", m);
	return 0;
}