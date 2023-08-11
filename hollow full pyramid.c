#include <stdio.h>

void hollow_full_pyramid(int length);

void main(){
	
	// call the shape function and choose the length of the hollow full pyramid
	hollow_full_pyramid(5);
	
}

void hollow_full_pyramid(int len){
	
	for(int i = 0; i < len; i++){
		
		for(int j = 0; j < ((len * 2) - 1); j++){
			
			if((j >= (len-1-i)) && (j <= (len-1+i))){
                if(i == (len -1)){
                    printf("*");
                }
                else{
                    if((j == (len-1-i)) || (j == (len-1+i)) ){
                        printf("*");
                    }
                    else{
                        printf(" ");
                    }
                }
				
			}
			else{
				printf(" ");
			}
			
	
			
		}
		
		printf("\n");
		
	}
}