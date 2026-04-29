#include <iostream>
using namespace std;

class Base{
    private:
        int num1;
    protected:
        int num2;
    public:
        int num3;
        void showData () {
            cout << " " << num2 << " " << num3 << endl;
        }
        Base() : num1 (10), num2(20), num3(30) {}
};

class Derived : protected Base {
    public:
        void ShowBase() {
            // cout << num1;
            cout << num2;
            cout << num3;
        }
};

int main(){
    Derived a;
    a.ShowBase();
}