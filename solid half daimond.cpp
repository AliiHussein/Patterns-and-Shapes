#include <iostream>
using namespace std;

void solid_hollow_daimond(int len);

int main(){
    // call the shape function and choose the desired scale of the shape
    solid_hollow_daimond(5);

    return 0;
}


void solid_hollow_daimond(int len){
    for(int i = 0; i < len*2-1; i++){
        for(int j = 0; j < len; j++){
            // Upper half of the diamond
            if(i < len){
                if(j <= i){
                    cout << "*";
                }   
                else{
                    cout << " ";
                }
            }
            // Lower half of the diamond
            else{
                if(j < (len*2 - i -1)){
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