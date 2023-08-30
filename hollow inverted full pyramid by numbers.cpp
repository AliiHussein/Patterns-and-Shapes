#include <iostream>
using namespace std;

void hollow_inverted_full_pyramid_by_numbers(int len);

int main(){

    hollow_inverted_full_pyramid_by_numbers(5);

    return 0;
}

void hollow_inverted_full_pyramid_by_numbers(int len){

    for(int i = 0; i < len; i++){
        for(int j  = 0; j < (len*2-1); j++){
            if((i == 0) || (i == (len-1))){
                if((j >= i) && (j < len)){
                cout << len - j;
                }
                else if((j >= len) && (j <= len*2-2-i)){
                    cout << j - len + 2;
                }
                else{
                    cout << " ";
                }
            }
            else{
                if((j == i) && (j < len)){
                cout << len - j;
                }
                else if((j >= len) && (j == len*2-2-i)){
                    cout << j - len + 2;
                }
                else{
                    cout << " ";
                }
            }
            
        }
        cout << endl;
    }

}

