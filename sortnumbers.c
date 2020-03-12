#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
	int a=3;
	int b=2;
	int c=1;
		if (a>b){
			if(a>c){
				if(b>c){
				printf("%d %d %d\n", a,b,c);
				}else{
				if(c>b){
				printf("%d %d %d\n",a,c,b);}

			}else{
			if(c>a){
			printf("&d &d %d\n",c,a,b);}}
			}else{
				if(b>a){
					if(c>b){
					printf("%d %d %d", c,b,a);
					}else{
						if(a>c){
						printf("%d %d %d",b,a,c);
						}else{
							if(c>a){
						printf("%d %d %d",b,c,a);}}}}}
return 0;
	}
