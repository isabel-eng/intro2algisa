#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char**argv)
{
	int i;
	int a=atoi(argv[1]);
	int b=atoi(argv[2]);
	int c=atoi(argv[3]);
	int aux;
	
	aux=a;
	for(i=0;i<3;i++)
	{
		if(a>b)
		{
		aux=a;
		a=b;
		b=aux;
		}else if (b>c)
			{
			aux=b;
			b=c;
			c=aux;
			}
	}
printf("%d\n%d\n%d\n", a,b,c);
return 0;

}
