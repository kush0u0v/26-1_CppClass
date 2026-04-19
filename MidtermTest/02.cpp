#include <iostream>
using namespace std;

//참조자 기반의 Call-by-reference
void Swap (int & a, int & b){
    int temp = a;
    a = b;
    b = temp;
}

int& Refplus(int &ref){
    ref ++;
    return ref;
}


int main(){
    bool a = 1; 
    //참조자
    int num1 = 1020;
    int &num2 = num1;
    num2 = 3047;

    // 참조 반
    int ref1 = 50;
    int & ref2 = Refplus(ref1);
    ref1++;
    ref2++;
    cout << ref1 << endl;

    int rref1 = 50;
    int rref2 = Refplus(rref1);
    rref1 ++;
    rref2 += 500;
    cout << rref1 <<rref2 << endl;


    int *ptr = new int;
    int &ref = *ptr;
    ref = 20;
    

    delete ptr;
    int *abc = new int[3];
    delete [] abc;

}