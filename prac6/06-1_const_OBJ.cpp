#include <iostream>
using namespace std;

class SoSimple{
    private: 
        int num;
    public:
        SoSimple(int n) : num(n) {

        }
        SoSimple& Addnum (int n) {
            num += n;
            return *this;
        }
        void showData() const{
            cout << num << endl;
        }
};

int main(){
    const SoSimple obj(1); // << 상수형태 선언
    //obj.Addnum(33); // 변환 불가
    obj.showData();
    return 0;
}