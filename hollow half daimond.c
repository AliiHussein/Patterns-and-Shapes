#include <stdio.h>

void hollow_half_daimond(int len);

void main(){

    hollow_half_daimond(3);

}

void hollow_half_daimond(int len){

    for(int i = 0; i < (len*2-1); i++){
        for(int j = 0; j < len; j++){
            // Upper half of the daimond
            if(i < len){
                if(j <= i){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
            // Lower half of the daimond
            else{
                
            }
            
            
        }
        // New line
        printf("\n");
    }

}