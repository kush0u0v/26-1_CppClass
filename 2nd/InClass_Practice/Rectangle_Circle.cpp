#include <iostream>
using namespace std;

class Rectangle {
    public:
        void init(int a, int b){
            cout << a*b << endl;
            cout << (a*2) + (b*2) << endl;
        }
};

class Circle {
    public:
        void init(int c){
            cout.setf(ios::fixed, ios::floatfield);
            cout.precision(2);

            cout << c * c * 3.14 << endl;
            cout << 2 * 3.14 * c << endl;
        }
};

int main(){
    int a,b,c; //가로 세로 반지름
    cin >> a >> b >> c;
    //사각형의 넓이, 사각형의 둘레, 원의 넓이, 원의 둘레
    Rectangle rectangle;
    Circle circle;

    rectangle.init(a, b);
    circle.init(c);
    
    return 0;
}