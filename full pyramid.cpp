#include <iostream>
using namespace std;

void full_pyramid(int length);

int main(){
	
	// call the shape function and choose the length of the full pyramid
	full_pyramid(3);
	return 0;
}

void full_pyramid(int len){
	
	for(int i = 0; i < len; i++){
		
		for(int j = 0; j < ((len * 2) - 1); j++){
			
			if((j >= (len-1-i)) && (j <= (len-1+i))){
				cout << "*";
			}
			else{
				cout << " ";
			}
			
	
			
		}
		
		cout << endl;
		
	}
}