#include <stdlib.h>
#include <stdio.h>
#include <math.h>




int main()
{

int a, b, c;
int count = 0;

for(c = 3; c<997; c++)
{

	for(b = 2; b<c; b++)
	{

			for(a = 1; a<b; a++)
			{
				count++;
				if(pow(a,2) + pow(b,2) == (pow(c,2))){
					if((a+b+c == 1000)){
						printf("%d a, %d b, %d c, \n", a, b, c);
						printf("%d\n", a * b * c);
						printf("%d\n", count);
						exit(0);
					}

				}

			}
	}

}







	return 0;
}