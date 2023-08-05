#include <stdio.h>

void half_pyramid(int length);

void main(){
	
	// call the shape function and choose the length of the half pyramid
	half_pyramid(5);
	
}

void half_pyramid(int len){
	
	for(int i = 0; i < len; i++){
		
		for(int j = 0; j < ((len*2) - 1); j++){
            if((j >= (i)) && (j <= (len*2 -2 - i))){
                printf("*");
            }
            else{
                printf(" ");
            }
			
		}
		
		printf("\n");
		
	}
}