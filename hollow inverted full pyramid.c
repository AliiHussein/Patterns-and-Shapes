#include <stdio.h>

void hollow_inverted_full_pyramid(int length);

void main(){
	
	// call the shape function and choose the length of the full pyramid
	hollow_inverted_full_pyramid(5);
	
}

void hollow_inverted_full_pyramid(int len){
	
	for(int i = 0; i < len; i++){
		
		for(int j = 0; j < ((len * 2) - 1); j++){
			
            if((j >= i) && (j <= (len * 2) - 2 -i)){
                if(i == 0){
                    printf("*");
                }
                else{
                    if((j == i) || (j == ((len*2) - 2 - i))){
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