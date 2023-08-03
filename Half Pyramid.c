#include <stdio.h>

void half_pyramid(int length);

void main(){
	
	// call the shape function and choose the length of the half pyramid
	half_pyramid(4);
	
}

void half_pyramid(int len){
	
	for(int i = 0; i < len; i++){
		
		for(int j = 0; j < (i + 1); j++){
			printf("* ");
		}
		
		printf("\n");
		
	}
}