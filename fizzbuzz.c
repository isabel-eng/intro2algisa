#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char**argv){
	int i;
	int num= atoi(argv[1])
	int nume= atoi(argv[2])
	for(i=num;i<=nume;i++){
	
		if(i%3==0&&i%5==0){

			printf("fizzbuzz\n");}

		else if(i%3==0){
			printf("fizz\n");}
		else if(i%5==0){
			printf("buzz\n");}
		else{ 
			printf("%d\n",i);}
	}
return 0;
}
