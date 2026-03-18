// 시(hour), 분(minute), 초(second) 정보를 지닐 수 있는 Time 클래스를 작성하시오.

// 클래스의 기능은 다음과 같다.

//    1.시, 분, 초 출력하기
//    2.시, 분, 초를 초로 변환하여 출력하기

// 출력방식은 두 가지로 제공한다.

// 하나는 [시, 분, 초]의 형식을 띄며, 또 하나는 초 단위로 계산한 출력 결과를 보여준다.

#include <iostream>
using namespace std;

class Time {
    int hour = 0, min = 0, sec = 0;

    public:
        void init(int h, int m, int s){
            hour = h;  min = m; sec = s;
            print();
        }

        void print(){
            cout << hour << "h " << min << "m " << sec << "s" << endl;
            cout << (hour*3600) + (min*60) + (sec) << "s" << endl;
        }
        
};

int main(){
    Time time; 
    int menu, a, b, c;
    cin >> menu;

    switch(menu){
        case 1:
            cin >> a;
            time.init(a, 0, 0);
            break;
        case 2:
            cin >> a >> b;
            time.init(a, b, 0);
            break;
        case 3:
            cin >> a >> b >> c;
            time.init(a, b, c);
            break;
    }
    return 0;
}