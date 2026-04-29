#include <iostream>
using namespace std;

class Point {
    private:
        int * x;
        int * y;
    public:
        Point() {
            x = new int(0);
            y = new int(0);
        }
        Point(int a) {
            x = new int(a);
            y = new int(a);
        }
        Point(int a, int b) {
            x= new int (a);
            y = new int (b);
        }
        Point (const Point & copy){
            x = new int (*(copy.x));
            y = new int (*(copy.y));
        }
        
        Point (int a, const Point & copy) {
            x = new int(*(copy.x) * a);
            y = new int(*(copy.y) * a);
        }

        void print_coords() const{
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
