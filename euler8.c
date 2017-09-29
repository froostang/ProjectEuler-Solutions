#include <stdlib.h>
#include <stdio.h>
#include <math.h>



int main()
{


	FILE *fp;
	char y[1000];
	int z = 0, w = 0;
	char n;
	int i = 0;
	int final = 0; 
	double finalcheck = 0, finalgood, check = 1;
	int temp[1000];
	char a,b,c,d,e,f,g,h,j,k,l,m;
	int aa;
	int count = 0;
	int counter = 0;

	fp = fopen("eul8.txt", "r");


	if( fp == NULL)
	{
		printf("error reading file\n");
		fclose(fp);
	}

		for(z = 0; z < 1000; z++)
		{
			fscanf(fp, "%c", &y[z]);

		}

		while(count < 987)
		{
			i = 0;
			check = 1;
			for(w = count; w < (count + 13); w++)
			{
				a = y[w];
				aa = atoi(&a);
				check *= aa;
				i++;
				printf("%c num in array %d\n", y[w], w);

			}
							printf("chek is %lf\n", check);

			if(check > finalcheck){
				finalcheck = check;
				printf("%lf finalcheck\n", finalcheck);
			}
			count++;
		}



		printf("FINAL CHECK***   %lf\n", finalcheck);

	char ax = y[w+1];
	finalgood = atoi(&ax);

	printf("final int thing: %lf\n", finalgood);


	fclose(fp);
	return 0;
}