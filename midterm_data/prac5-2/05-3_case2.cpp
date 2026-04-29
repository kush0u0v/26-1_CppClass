#include <iostream>

using namespace std;

// Call by Value

class SoSimple{
    private:
        int num;
    
    public:
        SoSimple(int n) : num(n) { }

        SoSimple(const SoSimple& copy) : num(copy.num) {
            cout << "SoSimple(const SoSimple& copy)" << endl;
        }
        void ShowData(){
            cout << num << endl;
        }
};

void SimpleFuncObj(SoSimple ob) {
    ob.ShowData();
}

int main(){
    SoSimple a(6);

    SimpleFuncObj(a);
}