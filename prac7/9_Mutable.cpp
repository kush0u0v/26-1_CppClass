#include <iostream>
using namespace std;

class SoSimple {
    private:
        int num1;
        mutable int num2; // mutable 선언됨 멤버변수는 const 함수 내에서 값의 변경이 가능.
    public:
        SoSimple(int n1, int n2) : num1(n1), num2(n2) { }

        void CopyToNum2() const {
            num2 = num1;
        }

        void shownum() {
            cout << num1 << '\n' << num2 << endl;
        }
};

int main() {
    SoSimple a(3, 4);
    a.shownum();
    a.CopyToNum2();
    a.shownum();
    
    return 0;
}