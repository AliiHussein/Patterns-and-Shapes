#include <stdio.h>

void solid_rectangle(int height, int width);

void main(){
	
	// call the shape function and choose the width & height
	solid_rectangle(5, 5);
	
}

void solid_rectangle(int height, int width){
	
	for(int i = 0; i < height; i++){
		
		for(int j = 0; j < width; j++){
			printf("* ");
		}
		
		printf("\n");
		
	}
}