#include <iostream>
using namespace std;

class SoSimple{
    private:
        int num1;
        static int num2;
    public:
        SoSimple(int n) : num1(n) { }; // 생성자
        static void Adder(int n) {
             //num1 += n; // static 함수는 static 변수만 접근 가능
             num2 += n;
        }
    
};

int SoSimple::num2 = 0;

int main() {
    SoSimple a(3);
    cout << SoSimple::num2 << endl;

}