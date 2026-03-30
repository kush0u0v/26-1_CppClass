#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    char arr[500];

    // 01. init
    for(int i = 0; i < 500; i++){
        arr[i] = '*';
    } 

    // 02. set
    for(int i = 0;  i < 2 * N-1 ; i++){

        if (i == 0 || i == (N*2) - 1) { }

        //upper reduce
        else if(i <= N){
            for(int j = 0; j < i; j++){
                arr[j] = ' ';
            } // front
            
            for(int j = 0; j < i; j++){
                arr[(((N * 2) - 2) - j)] = ' ';
            } // back
        }

        //lower add
        else if(i > N){
            int last = (N * 2) - i - 1;

            for(int j = last; i < ; )

            // 10 - 5 = 4
            
            // for(int j = 0; j < last; j++){

            // } // back
    
        }

        //print
        for(int p = 0; p < (N*2)-1; p++){
            cout << arr[p];
        } cout << '\n';
    }


    char arr2[200];

    for(int i = 1; i <= (N*2); i ++){
        if(i == 0) {
            arr2[N] = '*';
        } else {
            
        }
    }

}