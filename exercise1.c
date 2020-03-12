#include <stdlib.h>
#include <stdio.h>
#include <string.h>

float main(float argc, char**argv[])
{	float i=1;
	float sum=0
	float count=0;
	
	if(argc==1)
	{
	printf("enter  number\n")
	exit(1);
	}
	count=argc-1;
	while(i<=count)
	{
	sum+=aotf(argv[i];
	i++;
	}

	printf("avg %d\n",sum/count);
//	for(i=1;i<argc;i++)
//	{

	
//		for(i=1, i<sum,i++);
//		{
//		aux=atof(argv[i]);
//		average=average+aux;
//		}
//	}
return 0;
}
