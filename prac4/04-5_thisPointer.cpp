#include <iostream>
using namespace std;

class TwoNumber {
    private:
        int num1;
        int num2;
    public:
        TwoNumber(int num1, int num2){
            this -> num1 = num1;
            this -> num2 = num2;
        } // this Pointer

        // TwoNumber(int num1, int num2)
        // : num1(num1), num2(num2) {
        //     // initalrizer
        // }


        void ShowNum(){
            cout << this -> num1 << endl;
            cout << this -> num2 << endl;
        }
}
;
int main() {
    TwoNumber temp(2, 3);
    temp.ShowNum();
}