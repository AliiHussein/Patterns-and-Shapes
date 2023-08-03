#include <stdio.h>

void inverted_half_pyramid(int length);

void main(){
	
	// call the shape function and choose the length of the half pyramid
	inverted_half_pyramid(4);
	
}

void inverted_half_pyramid(int len){
	
	for(int i = 0; i < len; i++){
		
		for(int j = 0; j < (len - i); j++){
			printf("* ");
		}
		
		printf("\n");
		
	}
}