#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>



int create(int test[], int *final)
{
int i = 23,k, h;

while(1)
{
	h = 0;
	for(k = 1; k < 21; k++)
	{
		if (i % test[k] != 0)
		{
			break;
		}
		else{
			h++;
		}
	}

	if(h == 20)
	{
		*final = i;
		return 0;
	}


	i++;
}


return 0;

}


int main()
{
	int factors[25],i, final;
	for(i = 0; i < 21; i++)
	{
		factors[i] = i;
	}

	while(create(factors, &final));

	printf("%d\n", final);

	return 0;
}