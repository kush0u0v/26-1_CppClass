#include <iostream>
using namespace std; 

// Point 클래스의 멤버 변수는 다음과 같다.
// 1. x축 정보 (int *)
// 2. y축 정보 (int *)

// Point 클래스의 멤버 함수는 다음과 같다.
// 1. 점의 위치 초기화를 위한 생성자들
// 2. 점의 위치 출력

// 깊은 복사

class Point {
    private:
        int * x;
        int * y;
    public:
        Point() {
            x = new int(0);
            y = new int(0);
        }
        Point (int a) {
            x = new int (a);
            y = new int (a);
        }
        Point (int a, int b) {
            x = new int (a);
            y = new int (b);
        }
        Point (const Point & copy) {
            x = new int (*copy.x);
            y = new int (*copy.y);
        }
        Point (int a, const Point & copy){
            x = new int ((*copy.x) * a);
            y = new int ((*copy.y) * a);
        }

        void print_coords() {
            cout << "[" << *x << ", " << *y << "]" << endl;
        }
};

int main()
{
    Point pt1;
    Point pt2(1);
    Point pt3(2, 3);
    Point pt4(pt3); //<--깊은 복사 생성자 구현 필요
    Point pt5(2, pt3);

    pt1.print_coords();
    pt2.print_coords();
    pt3.print_coords();
    pt4.print_coords();
    pt5.print_coords();
}