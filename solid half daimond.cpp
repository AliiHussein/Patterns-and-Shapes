#include <iostream>
using namespace std;

void solid_hollow_daimond(int len);

int main(){

    solid_hollow_daimond(5);

    return 0;
}


void solid_hollow_daimond(int len){
    for(int i = 0; i < len*2-1; i++){
        for(int j = 0; j < len; j++){
            if(i < len){
                if(j <= i){
                    cout << "*";
                }   
                else{
                    cout << " ";
                }
            }
            else{
                if(j < (len*2 - i -1)){
                    cout << "*";
                }   
                else{
                    cout << " ";
                }
            }
            
        }
        cout << endl;
    }
}