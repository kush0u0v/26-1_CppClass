#include <iostream>
#include "04-1_header.h"
using namespace std;

// class Point{
// public:
//     int x;
//     int y;
// };

// class Rectangle{
// public:
//     Point upLeft;
//     Point lowRight;

// public:
//     void ShowRecInfo(){
//         cout << upLeft.x << ", " << upLeft.y << endl;
//         cout << lowRight.x << ", " << lowRight.y << endl;
//     }
// };

// int main(){
//     Point pos1 = {-2, 4};
//     Point pos2 = {5, 9};
//     Rectangle rec = {pos1, pos2};
//     rec.ShowRecInfo();
// }

int main() {
    Point s1;
    if(!s1.InitMembers(-5,6)){
        cout << "Init fail" << "\n";
    } // fail
    if(!s1.InitMembers(5,6)){
        cout << "Init fail" << "\n";
    } // Sucess

    Point s2;
    if (!s2.InitMembers(6,7)){
        cout << "Init fail" << "\n";
    }

    Rectangle rec;
    if(!rec.InitMemebers(s1, s2)){
        cout << "Init fail" << "\n";
    } // Sucess
    if(!rec.InitMemebers(s2, s1)){
        cout << "Init fail" << "\n";
    } // fail

    rec.ShowRecInfo();
}
