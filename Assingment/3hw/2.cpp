#include <iostream>
using namespace std;

// Circle 클래스의 멤버 변수는 다음과 같다.
// 1. 반지름의 길이 (int)

// Circle 클래스의 멤버 함수는 다음과 같다.
// 1. 반지름의 길이를 입력으로 객체를 생성하는 생성자
// 2. 반지름의 길이를 변경하는 SetRadius 함수
// 2. 원의 넓이와 둘레를 출력하는 printInfo 함수

// 초기 원의 반지름을 입력한 후 변경하고자 하는 원의 반지름을 입력한다.
// 입력 값은 정수이다.

// 원의 둘레와 넓이를 출력한다.
// 원의 둘레 및 넓이 계산 방법은 아래와 같다.
// 원의 둘레: 2 * 3.14 * (반지름)
// 원의 넓이: 3.14 * (반지름) * (반지름)

class Circle {
    private:
        int half_len;
    
    public:
        Circle (int a) : half_len(a) {  }

        Circle SetRadius(const Circle& copy) : half_len(copy.half_len) {
            
        }

        void printInfo() {
            cout << (2 * 3.14 * half_len) << " " << (3.14 * half_len * half_len) << endl; 
        }  
};

int main() {
    int r1, r2;
    cin>>r1; //1 

    Circle Cir1(r1); // 1
    const Circle Cir2(r1); // 1

    cin >> r2; // 2

    Cir1.SetRadius(r2); // 교환

    Cir1.printInfo();
    Cir2.printInfo();

    return 0;
}