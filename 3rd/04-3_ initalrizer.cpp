#include <iostream>
using namespace std;

class Point {
private:
    int x, y;
public:
    Point(const int &xpos, const int &ypos); // Init 안쓰고

    int GetX() const;
    int GetY() const;

    bool SetX(int xpos);
    bool SetY(int ypos);
};

class Rectangle{
private:
    Point upLeft;
    Point lowRight;
public:
    Rectangle(const int &x1, const int &y1, const int &x2, const int &y2);
    void ShowRecInfo() const;

    bool InitMemebers(const Point &ul, const Point &lr) {
        if(ul.GetX() > lr.GetX() || ul.GetY() > lr.GetY()) {
            cout << "differ location" << endl;
            return false;
        }

        upLeft = ul;
        lowRight = lr;
        return true;
    }

    void ShowRecInfo(){
        cout << upLeft.GetX() << " " << upLeft.GetY() << endl;
        cout << lowRight.GetX() << " " << lowRight.GetY() << endl;
    }
};

int Point::GetX() const { 
    return x; }
int Point::GetY() const { 
    return y; }

// bool Point::SetX(int xpos){
//     if(0 > xpos || xpos > 100) {
//         cout << "out of size" << endl;
//         return false;
//     }
//     x = xpos;
//     return true;
// }

// bool Point::SetY(int ypos){
//     if(0 > ypos || ypos > 100) {
//         cout << "out of size" << endl;
//         return false;
//     }
//     y = ypos;
//     return true;
// }

Point::Point(const int &xpos, const int &ypos){
    x = xpos;
    y = ypos;
} // 초기화


Rectangle::Rectangle(const int &x1, const int &y1, const int &x2, const int &y2)
        :upLeft(x1, y1), lowRight(x2, y2) 
{
    //init
}

// =============================================


int main(){
    Rectangle rec(1, 2, 3, 4);
    rec.ShowRecInfo();
}
//const와 refer도 inialrizer를 통해 Init 가능 
