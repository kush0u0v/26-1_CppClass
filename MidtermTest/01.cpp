#include <iostream>
using namespace std;

inline int SQUARE (int x) { // 인라인 vs 매크로
    return x * x;
}

//
namespace Best {
    void SimpleFunc(void) {
        cout << "Best Define" << endl;
    }
}

namespace Worst{
    void SimpleFunc(void) {
        cout << "Worst" << endl;
    }
}

//
namespace A{
    namespace B{
        namespace C{
            int num1 = 32;
        }
    }
}

namespace ABC = A::B::C;

int a = 50;

int main() {
    Best :: SimpleFunc();
    Worst :: SimpleFunc();
    ABC::num1 = 40;
    ::a += 50;
    cout << A::B::C::num1 << endl;
    cout << a << endl;
}