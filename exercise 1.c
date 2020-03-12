#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float main(int argc,char**argv)
{	int i=1;
	float sum=0.0;
	float aux=0.0;
	float average=0.0;
	float min=10000000000;
	float max=0;
	for(i=1; i<argc;i++)
	{	sum+=atof(argv[i]);
	}	printf("the sum is %f\n",sum);
	

	average=sum/argc;
	printf("the average is %f\n", average);
	
	if (min>atof(argv[i]));
	{	min=(atof(argv[i]));
	}
		printf("el min es %f\n", min);
		if (max<atof(argv[i]));
		{	max=(atof(argv[i]));
		}
		printf("el max es %f\n",max);
return 0;
}
