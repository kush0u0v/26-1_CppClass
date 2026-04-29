#include <iostream>
using namespace std;

class CountryArea {
    public:
        const static int kor = 1111;
        const static int chi = 3333;
        const static int sov = 4444;
        const static int jap = 5555;

};


int main() {
    cout << CountryArea::kor << endl;
}