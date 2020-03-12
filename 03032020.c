#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
	int i;
	int n=0;
	for (i=1500; i<=2100; i++)
		{if((i%4==0)||(1%400)&&(i%100!=0)){
		printf("%d\n",i);
		n++;
		}
	}
		printf( "%d\n", n);
		return 0;
} 
