#include <iostream>
using namespace std;

void Fibonacci (int a = 3) {
    int x = 0, y = 1;

    while (x <= a) {
        cout << x << " ";
        int temp = x + y;

        x = y;
        y = temp;
    }

    cout << endl;
}

int main() {
    Fibonacci();
    Fibonacci(8);
    Fibonacci(100);
    return 0;
}