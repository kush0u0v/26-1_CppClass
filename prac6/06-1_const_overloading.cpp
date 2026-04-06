#include <iostream>
using namespace std;

class SoSimple{
    private: 
        int num;
    public:
        SoSimple(int n) : num(n) {  } // 생성자

        SoSimple& Addnum (int n) {
            num += n;
            return *this;
        }

        // 시험 : 예제 중 오버로딩이 되는거 안되는거, 반환 타입이 다른거
        void SimpleFunc(){
            cout << "simple Func : " << num << endl;
        }

        void SimpleFunc() const { // Overloading
            cout << "over Func : " << num << endl; 
        }
};

void YourFunc(const SoSimple &obj){ // obj를 const 형태로
    obj.SimpleFunc(); // SimpleFunc 실행
}

int main(){
    SoSimple obj(1); 
    const SoSimple obj2(10);

    obj.SimpleFunc(); // void SimpleFunc() 실행 
    obj2.SimpleFunc(); // void SimpleFunc() const 실행

    YourFunc(obj); // void SimpleFunc() const 실행
    YourFunc(obj2); // void SimpleFunc() const 실행

    return 0;
}