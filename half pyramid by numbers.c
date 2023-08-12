#include <stdio.h>

void half_pyramid_by_numbers(int length);

void main(){
	
	// call the shape function and choose the length of the half pyramid
	half_pyramid_by_numbers(5);
	
}

void half_pyramid_by_numbers(int len){
	
	for(int i = 0; i < len; i++){
		
		for(int j = 1; j <= (i+1) ; j++){
            printf("%d ",j);
			
		}
		
		printf("\n");
		
	}
}