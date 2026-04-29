#include <iostream>
using namespace std;

class Circle {
    private:
        int half;
    public:
        Circle (int a) : half(a) {

        }
        void SetRadius(int b){
            half = b;
        }
        void printInfo () const{
            cout << 2* 3.14 * half <<" "<< 3.14 * half * half << endl;
        }
};

int main() {
    int r1, r2;
    cin>>r1;

    Circle Cir1(r1);
    const Circle Cir2(r1);

    cin >> r2;

    Cir1.SetRadius(r2);

    Cir1.printInfo();
    Cir2.printInfo();

    return 0;
}