#include <iostream>
using namespace std;

void full_pyramid_with_numbers(int length);

int main(){
	
    // call the shape function and choose the length of the full pyramid
    full_pyramid_with_numbers(3);

    return 0;
}

void full_pyramid_with_numbers(int len){
	
	for(int i = 0; i < len; i++){
		int k = 1;
		for(int j = 0; j < ((len * 2) - 1); j++){
			
			if((j >= (len-1-i)) && (j <= (len-1+i))){
				cout << len-j;
			}
			else{
				cout << " ";
			}
		}
		
		cout << endl;
	}
}

/*
  1
 212
32123
*/