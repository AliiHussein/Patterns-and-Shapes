#include <iostream>
using namespace std;

void inverted_full_pyramid_with_numbers(int length);

int main(){
	
    // call the shape function and choose the length of the full pyramid
    inverted_full_pyramid_with_numbers(5);

    return 0;
}

void inverted_full_pyramid_with_numbers(int len){
	
	for(int i = 0; i < len; i++){
        int k = 2;
		for(int j = 0; j < ((len * 2) - 1); j++){
			
            if((j >= i) && (j < len)){
                cout << len-j;
            }
            else if((j >= len) && (j <= ((len*2)-2-i))){
                cout << k++;
            }
            else{
                cout << " ";
            }
		}
		
		cout << endl;
	}
}
