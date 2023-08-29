#include <iostream>
using namespace std;

void heart(int length);

int main(){
	
	// call the shape function and choose the length of the heart
	heart(11);

    return 0;
	
}

void heart(int len){
	
	cout << "  *******   *******  " << endl;
    cout << " ********* ********* " << endl;
    cout << "*********************" << endl;
    cout << "*********************" << endl;

    for(int i = 0; i < len; i++){
        for(int j = 0; j < ((len * 2)-1); j++){
            if((j >= i) && (j <= ((len*2)-2 - i))){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
}

/*
  *******   *******
 ********* *********
**********************
**********************
**********************
 ********************
  *****************
   ***************

*/