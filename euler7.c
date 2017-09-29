#include <stdlib.h>
#include <stdio.h>
#include <math.h>





int getPrime(int num, int run)
{
	int i;
	for(i=2; i < num; i++)
	{
		if(num % i == 0)
		{
			return run;
		}
		
	}
	run++;
	return run;

}


int main()
{
	int i, k, num = 1, run = 0;


	while(run != 10001){
		num++;
		run = getPrime(num, run);


	}
	printf("%d\n", num);

	return 0;
}