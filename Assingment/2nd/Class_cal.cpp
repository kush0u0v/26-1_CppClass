// Calculator 클래스가 기본적으로 지니는 기능은 다음과 같다.
// 1. 두 수 더하기
// 2. 두 수 빼기
// 3. 두 수 곱하기
// 4. 몫 구하기
// 5. 나머지 값 구하기
// 6. 연산 수행 기록 확인

// 단, 멤버변수는 private, 멤버함수는 public으로 선언한다.

// 메뉴는 다음과 같다.
// 0. 종료
// 1. 두 수 입력하기
// 2. 두 수를 더한 값 출력
// 3. 두 수를 뺀 값 출력
// 4. 두 수를 곱한 값 출력
// 5. 두 수를 나눴을 때 몫 출력
// 6. 두 수를 나눴을 때 나머지 값 출력
// 7. 연산 수행 기록 출력하기

#include <iostream>
using namespace std;

class Calculator{
    private:
        int total[6] = {0};
        int a;
        int b;

    public:
        void input(){
            cin >> a >> b;
        }
        void sum() {
            cout << a+b << endl;
            total[0] ++;
        }
        void rsum(){
            cout << a-b << endl;
            total[1] ++;
        }
        void x(){
            cout << a*b << endl;
            total[2] ++;
        }
        void div(){
            cout << a/b << endl;
            total[3] ++;
        }
        void div_l(){
            cout << a%b <<endl;
            total[4] ++;
        }
        void ALL_print(){
            cout << "Add: " << total[0] << endl 
            << "Minus: " << total[1] << endl 
            << "Mul: " << total[2] << endl
            << "Div: " << total[3] << endl
            << "Mod: " << total[4] << endl;
        }

} ;

int main(){
    Calculator cal;

    while(1){
        int menu;
        cin >> menu;

        switch (menu) {
            case 0:
                return 0;
            case 1:
                cal.input();     break;
            case 2:
                cal.sum();       break;
            case 3:
                cal.rsum();      break;
            case 4:
                cal.x();         break;
            case 5:
                cal.div();       break;
            case 6:
                cal.div_l();     break;
            case 7:
                cal.ALL_print(); break;
        }
    }

    return 0;
}