#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
float distance(float x, float y){
	return sqrt(x*x + y*y);
}
int main (int argc, char** argv){
	float cateto1 = atof(argv[1]);
	float cateto2= atof(argv[2]);
	printf("distance is %f\n", distance(cateto1,cateto2));
	return(0);
}
