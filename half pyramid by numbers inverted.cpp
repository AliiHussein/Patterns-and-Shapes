#include <iostream>
using namespace std;


void half_pyramid_by_numbers_inverted(int length);

int main(){
	
	// call the shape function and choose the length of the half pyramid
	half_pyramid_by_numbers_inverted(5);
	return 0;
}

void half_pyramid_by_numbers_inverted(int len){
	
	for(int i = 0; i < len; i++){
		
		for(int j = 1; j <= (len-i) ; j++){
            cout << j << " ";
			
		}
		
		cout << endl;
		
	}
}