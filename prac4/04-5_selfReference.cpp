#include <iostream>
using namespace std;

class SelRef {
private:
    int num;
public:
    SelRef(int n) : num(n) {
        cout << "obj create" << endl;
    }
    SelRef& Adder (int n) {
        num += n;
        return *this;
    }
    SelRef& ShowTwoNumber() {
        cout<< num << endl;
        return *this;
    }
};


int main(){
    SelRef obj(3);
    SelRef &ref = obj.Adder(2);
    obj.ShowTwoNumber();
    ref.ShowTwoNumber();
    ref.Adder(1).ShowTwoNumber().Adder(2).ShowTwoNumber();
    //Method Chaining
}