#include <iostream>
using namespace std;

class Point {
    private:
        int x;
        int y;
    public:
        bool InitMembers(int xpos, int ypos);
        int GetX() const;
        int GetY() const;
        bool SetX(int xpos);
        bool SetY(int ypos);
};
// =============================================

bool Point::InitMembers(int xpos, int ypos){
    if (xpos < 0 || ypos < 0){
        cout << "Invalid" << endl;
        return false;
    }
    x = xpos;
    y = ypos;
    return true;
}

int Point::GetX() const { 
    return x; }
int Point::GetY() const { 
    return y; }

bool Point::SetX(int xpos){
    if(0 > xpos || xpos > 100) {
        cout << "out of size" << endl;
        return false;
    }
    x = xpos;
    return true;
}

bool Point::SetY(int ypos){
    if(0 > ypos || ypos > 100) {
        cout << "out of size" << endl;
        return false;
    }
    y = ypos;
    return true;
}

//====================================

class Rectangle{
    private:
        Point upLeft;
        Point lowRight;
        
    public:
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