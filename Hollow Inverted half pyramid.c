#include <stdio.h>

void hollow_inverted_half_pyramid(int length);

void main(){
	
	// call the shape function and choose the length of the half pyramid
	hollow_inverted_half_pyramid(6);
	
}

void hollow_inverted_half_pyramid(int len){
	
	for(int i = 0; i < len; i++){
		
		for(int j = 0; j < (len - i); j++){
			
			if((i == 0) || (i == (len - 1))){
				printf("* ");
			}
			else{
				if((j == 0) || (j == (len - 1 - i))){
					printf("* ");
				}
				else{
					printf("  ");
				}
			}
			
		}
		
		printf("\n");
		
	}
}