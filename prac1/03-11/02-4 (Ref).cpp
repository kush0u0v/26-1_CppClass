#include <iostream>
using namespace std;

int & RefByFunOne (int &ref){
    ref ++;
    return ref;
}

int RefByFunTwo (int &ref) {
    ref ++;
    return ref;
}

int main() {
    int a = 1;
    
    int &num2 = RefByFunOne(a);
    cout << "num a : " << a << endl;
    cout << "num num2 : " << num2 << endl; 

    // int num3 = RefByFunTwo(a);
    // cout << "num a : " << a << endl;
    // cout << "num num1 : " << num3 << endl;

    return 0;
}