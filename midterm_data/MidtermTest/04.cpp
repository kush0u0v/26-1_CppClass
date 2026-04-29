#include <iostream>
using namespace std;

class Point {
    private:
        int x;
        int y;
    public:
        bool InIt(int xpos, int post);
        int Getx() const;
        int Gety() const;
        bool SetX (int xpos);
        bool SetY (int ypos);
};

bool Point::SetX(int xpos){
    x = xpos;
    return 1;
}

// bool Point::InIt(int xpos, int ypos){
//     x = xpos;
//     y = ypos;
//     return 1;
// }

class Rec {
    private:
        Point upLeft;
        Point lowRigh;
    public:
        bool InIt (const Point &ul, const Point &lr);
        void Show() const;
};
bool Rec::InIt(const Point &ul, const Point &lr) {
    upLeft = ul;
    lowRigh = lr;
    return 1;
}

int main() {

}