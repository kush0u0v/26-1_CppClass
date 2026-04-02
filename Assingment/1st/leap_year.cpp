#include <iostream>
using namespace std;

int main(){
    int year;
    cin >> year;

    bool ans = (year % 4 == 0) && ((year % 100 != 0) || (year % 400 == 0));

    if (ans) {
        cout << "Leap Year" << endl;
    } else {
        cout << "Not a Leap Year" << endl;
    } return 0;
}