#include <stdlib.h>
#include <stdio.h>
#include <math.h>



int main(void){


double i, j, k = 2, x;
for(i = 3; i < 2000000; i++)
{
	x = 0;
	for(j = 2; j < i; j++)
	{
		if(!fmod(i,j))
			x += 1;
	}
	if(x < 1)
	k += i;

if(!fmod(i, 1000))
	printf("we've gone %lf\n", i);
}
printf("FINAL = %lf\n", k);



	return 0;
}