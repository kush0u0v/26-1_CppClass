#include <iostream>
using namespace std;

int sum(int a, int b , int c = 0, int d = 0, int e = 0) {
    return a + b + c + d + e;
}

int main() {
    int temp, a, b, c, d, e;
    cin >> temp;
    
    switch (temp) {
        case 1:
            cin >> a >> b;
            cout << sum(a, b) << endl;
            break;
        case 2:
            cin >> a >> b >> c;
            cout << sum(a, b, c) << endl;
            break;
        case 3:
            cin >> a >> b >> c >> d;
            cout << sum(a, b, c, d) << endl;
            break;
        case 4:
            cin >> a >> b >> c >> d >> e;
            cout << sum(a, b, c, d, e) << endl;
            break;
    }
    return 0;
}