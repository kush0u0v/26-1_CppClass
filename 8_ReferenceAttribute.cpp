#include <iostream>
using namespace std;

class First {
public:
    void FirstFunc() {
        cout << "FirstFunc()" << endl;
    }
    virtual void SimpleFunc() {
        cout << "First's SimpleFunc()" << endl;
    }
};

class Second : public First {
    public:
        void SecondFunc() {
            cout << "SecondFunc()" << endl;
        }
        virtual void SimpleFunc() {
            cout << "Second's Simple" << endl;
        }
};

class Third : public Second {
    public:
        void ThirdFunc() {
            cout << "Third" << endl;
        }
        virtual void SimpleFunc() {
            cout << "Third's Simple" << endl;
        }
};

int main() {
    Third obj;
    obj.FirstFunc();
    obj.SecondFunc();
    obj.ThirdFunc();
    obj.SimpleFunc();
    cout << "\n";
    Second & sref = obj; // 참조시?
    sref.FirstFunc();
    sref.SecondFunc();
    sref.SimpleFunc();
    cout << "\n";
    First & fref = obj; // 참조시
    fref.FirstFunc();
    fref.SimpleFunc(); // Third
    return 0;
}