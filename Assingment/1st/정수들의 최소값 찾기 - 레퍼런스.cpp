#include <iostream>
using namespace std;

//n(1≤n≤100)개의 정수를 입력 받아 입력 받은 정수 중 최소값을 찾는 프로그램을 작성하시오.
// 최소값을 구하는 min 함수를 이용하여 프로그램을 작성하시오.
// 단, main 함수는 다음과 같다.

void min(int arr[100], int n, int &min_num){
    min_num = arr[0];

    for (int i = 0; i < n; i++) {
        if (min_num > arr[i])
            min_num = arr[i];
    }
    return;
}

int main() 
{
    int n, i, min_num;
    int arr[100];
    cin >> n;
    for(i = 0; i< n; i++) cin >> arr[i];
    min(arr, n, min_num);
    cout << min_num;
    return 0;
}