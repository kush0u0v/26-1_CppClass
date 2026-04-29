#include <iostream>
using namespace std;
//다음 main 함수에서 객체 생성을 위해 필요한 모든 생성자를 포함하도록 Point 클래스를 작성하시오.

// Point 클래스의 멤버 변수는 다음과 같다.
// 1. x축 정보 (int *)
// 2. y축 정보 (int *)

// Point 클래스의 멤버 함수는 다음과 같다.
// 1. 점의 위치 초기화를 위한 생성자들
// 2. 점의 위치 출력

class Point{
    private:
        int xpos;
        int ypos;
    
    public:
        Point() : xpos(0), ypos(0) {    }
        Point(int x, int y) : xpos(x), ypos(y) {    }
        Point(int x) : xpos(x), ypos(x) {   }
        Point(const Point& copy) : xpos (copy.xpos), ypos (copy.ypos) {    }
        Point(int x, const Point& copy) : xpos (copy.xpos * x), ypos (copy.ypos * x) {  }

        void print_coords() {
            cout << "[" << xpos << ", " << ypos << "]" << endl;
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
