#include <stdio.h>

void hollow_rectangle(int height, int width);

void main(){
	
	// call the shape function and choose the width & height
	hollow_rectangle(5, 8);
	
}

void hollow_rectangle(int height, int width){
	
	for(int i = 0; i < height; i++){
		
		for(int j = 0; j < width; j++){
			
			if((i == 0) || (i == (height - 1))){
				printf("* ");
			}
			else{
				if((j == 0) || (j == (width - 1))){
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