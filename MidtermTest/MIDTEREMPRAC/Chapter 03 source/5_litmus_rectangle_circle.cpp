#include <iostream>
using namespace std;

class Rectangle {
private:
    int width;
    int height;

public:
    Rectangle(int w, int h) {
        width = w;
        height = h;
    }

    int area() {
        return width * height;
    }

    int perimeter() {
        return 2 * (width + height);
    }
};

class Circle {
private:
    int radius;

public:
    Circle(int r) {
        radius = r;
    }

    double area() {
        return 3.14 * radius * radius;
    }

    double perimeter() {
        return 2 * 3.14 * radius;
    }
};

int main() {
    int w, h, r;
    cin >> w >> h >> r;

    Rectangle rect(w, h);
    Circle cir(r);

    cout << rect.area() << endl;
    cout << rect.perimeter() << endl;

    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(2);

    cout << cir.area() << endl;
    cout << cir.perimeter() << endl;

    return 0;
}