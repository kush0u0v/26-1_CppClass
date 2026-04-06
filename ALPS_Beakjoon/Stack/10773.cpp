#include <stdio.h>

int main(){
    int k, p=0;
    int arr[100001] = {0};

    scanf("%d", &k);
    
    for(int i = 0; i < k; i++){
        int temp;
        scanf("%d", &temp);

        if(temp == 0){
            if (p > 0){
                p--;
                arr[p] = 0;
            }
        } else {
            arr[p] = temp;
            p++;
        }
    }

    int ans = 0;
    for(int i = 0; i <= p; i++){
        ans += arr[i];
    }

    printf("%d", ans);
}