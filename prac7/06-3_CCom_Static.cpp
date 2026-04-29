#include <iostream>
using namespace std;

// 전역변수 Static은, 선언된 파일 내에서만 참조를 허용

class SoSimple{
    public:
        static int simObjCnt;
    public:
        SoSimple() {
            simObjCnt++;
            cout << simObjCnt << "번째 OBJ" << endl;
        }
};

int SoSimple::simObjCnt = 0; // static = 0 초기화

int main(){
    SoSimple sim1;
    SoSimple sim2;
    SoSimple sim3;
    cout << sim3.simObjCnt << endl;
    cout << sim2.simObjCnt << endl; // static 외부에서 접근하려면, public으로 선언시에만 접근 가능.
}