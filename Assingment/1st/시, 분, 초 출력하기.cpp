// 시, 분, 초를 입력받아서 초로 환산하는 프로그램을 작성하시오. time()함수의 매개변수 디폴트 값을 이용하여 프로그래밍하시오.

// 메뉴를 입력받는다. 메뉴는 다음과 같다.

//    1. 초기화
//    2. 시
//    3. 시 분
//    4. 시 분 초

// 메뉴 선택 시 범위를 초과하거나, 음수가 입력될 경우 예외처리 하시오

// 입력받은 정수를 차례대로 출력하고, 초단위로 환산한 출력결과를 보여준다. 
// 메뉴 선택 시 범위를 벗어나면, "wrong menu"를 출력한다. 시, 분, 초에 음수가 입력되면, "incorrect number"를 출력하시오.

#include <iostream>
using namespace std;

void time (int a, int b = 0, int c = 0){
    if (a < 0 || b < 0 || c < 0){
        cout << "incorrect number" << endl;
        return;
    }

    int ans = (a * 3600) + (b * 60) + (c);
    cout << ans << endl;
    return; 
}

int main() {
    int menu;
    cin >> menu;
    int ans = 0;

    int a,b,c;
    switch (menu) {
        case(1):
            ans = 0;
            cout << ans << endl;
            break;
        case(2):
            cin >> a;
            time(a);
            break;
        case(3):
            cin >> a >> b;
            time(a, b);
            break;
        case(4):
            cin >> a >> b >> c;
            time(a, b, c);
            break;
        default:
            cout << "wrong menu" << endl;
            break;
    } return 0;
}