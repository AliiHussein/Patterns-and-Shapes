#include <stdio.h>

void house(int length);

void main(){
	
	// call the shape function and choose the length of the house
	house(5);
	
}

void house(int len){
	
    /*
        To draw the house roof
    */
	for(int i = 0; i < len; i++){
		for(int j = 0; j < (len*2) - 1; j++){
            if(j>= (len-1-i) && (j <= (len-1+i))){
                printf("*");
            }
            else{
                printf(" ");
            }
            
			
		}
		printf("\n");
	}

    /*
        To draw the house base
    */
    for(int i = 0; i < len-2; i++){
        for(int j = 0; j < (len*2)-1; j++){
            if(j < ((len*2-1)/3) || (j >=((len*2-1)*2/3))){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}