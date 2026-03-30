#include <iostream>
#include <stdlib.h>
using namespace std;

int compare(const void* a, const void* b){
    return *(int*)a - *(int*)b;
}

int main(){
    int total = 0;
    int stand[9] = {};

    for (int i = 0; i < 9; i++){
        cin >> stand[i];
    }

    // sort
    qsort(stand, 9, sizeof(*stand), compare);

    // dp?
    int possi[100];

    while(1){
        int temp = 0;

        for(int a = 0; a < 9; a++){ // 1

            
            for(int b = 0; b < 9; b++){ // 2
                if(b == a) continue;

                for(int i = 0; i < 7; i++){
                      // 본인을 가르킬때 pass    
                    if(i == b) 

                    else {
                        for(int j = 0; j < 7; j++){
                            stand[j]



                        }
                    }


                }    
            }   
            
            
            possi[a] = temp; // SAVE
        }

    }
    
    // print
    for(int i = 0; i < 9; i++){
        cout << stand[i] << '\n';
    }
}