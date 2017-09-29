#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>



int *create()
{
int i;
int factors[25];
for(i = 0; i < 21; i++)
{
	factors[i] = i;
}
return factors;

}


int main()
{
int factors[25];

//1-20
	factors = create;

return 0;
}