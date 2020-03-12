#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*int main(){
	
	printf("the sum is %d\n", add_two_int(num1,num2));
	return(0);
}*/
int add_two_int(int x1, int x2)
{
	return x1 +x2;

}


int main(int argc, char** argv)
{
	int i;
	int num1=atoi(argv[1]);
	int num2=atoi(argv[2]);
	for(i=0; i<num2; i++){
	printf("argv[%d] is %s \n", i, argv[i]);
	}
	printf("%d\n", num1);
	return (0);
}
