#include <iostream>
using namespace std;

//Overloding
int arithmetic(int a, int b, char oper) {
    int ans;
    switch (oper) {
        case '+' :
            ans = a + b;
            break;
        case '-' :
            ans = a - b;
            break;
        case '*' :
            ans = a * b;
            break;
        case '/' :
            ans = a / b;
            break;
    } return ans;
}

double arithmetic(double a, double b, char oper) {
    double ans;
        switch (oper) {
        case '+' :
            ans = a + b;
            break;
        case '-' :
            ans = a - b;
            break;
        case '*' :
            ans = a * b;
            break;
        case '/' :
            ans = a / b;
            break;
    } return ans;
}

int main() {
    int menu;
    cin >> menu;

    char oper;
    switch (menu) {
        case 1: //num
            int a, b;
            cin >> a >> oper >> b;
            cout << arithmetic(a, b, oper) << endl;
            break;
        case 2: //float
            double c, d;
            cin >> c >> oper >> d;
            double ans = arithmetic(c, d, oper);

            cout.setf(ios::fixed, ios::floatfield);
                cout.precision(2);
                cout << ans;
            break;
    }
    return 0;
}