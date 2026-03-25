#include <iostream>
using namespace std;

class SinivelCap {
    public:
        void Take() const {
            cout << "hehe" << endl;
        }
};

class SneezeCap {
    public:
        void Take() const {
            cout << "haha" << endl;
        }
};

class SnuffleCap {
    public:
        void Take() const {
            cout << "hoho" << endl;
        }
};

//============================

class CONTAC600 {
    private:
    SinivelCap sin;
    SneezeCap sne;
    SnuffleCap snu;

    public:
        void Take() const {
            sin.Take();
            sne.Take();
            snu.Take();
        }
};

class ColdPatient {
    public:
        void takeCONTAC600(const CONTAC600 &cap) const {
            cap.Take();
        }
};

//============================

int main(){
    CONTAC600 cap;
    cap.Take();
}