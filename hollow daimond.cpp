#include <iostream>
using namespace std;

void hollow_daimond(int len);

int main(){

    // call the shape function and choose the desired scale of the shape
    hollow_daimond(5);

    return 0;
}


void hollow_daimond(int len){
    for(int i = 0; i < len*2; i++){
        for(int j = 0; j < (len*2-1); j++){
            // Upper half of the diamond
            if(i < len){
                if((j == (len-1-i)) || (j == (len-1+i))){
                cout << "*";
                }
                else{
                    cout << " ";
                }
            }
            // Lower half of the diamond
            else{
                if((j == i-len) || (j == (len*2-2-i+len))){
                    cout << "*";
                }
                else{
                    cout << " ";
                }
            }
            
        }
        // New line
        cout << endl;
    }
}