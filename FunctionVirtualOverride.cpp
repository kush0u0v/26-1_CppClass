#include <iostream>
using namespace std;

class First {
    public: 
    virtual void MyFunc() {
        cout << "1 func" << endl;
    }
};

class Second: public First {
    public:
    virtual void MyFunc() {
        cout << "2 func" << endl;
    }
};

class Third: public Second {
    public:
    virtual void MyFunc() {
        cout << "3 func" << endl;
    }
};

int main(){
    Third * tptr = new Third();
    Second * sptr = tptr;
    First * fptr = sptr;

    fptr -> MyFunc();
    sptr -> MyFunc();
    tptr -> MyFunc();

    delete tptr;
    return 0;
}