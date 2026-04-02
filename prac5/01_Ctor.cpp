#include <iostream>
using namespace std;

class SoSimple {
    private:
    int num1;
    int num2;

    public:
        SoSimple (int n1, int n2) : num1(n1), num2(n2) { 

        }

        // 1.
        // Sosimple (const SoSimpe &copy) : num1(copy.num1), num2(copy.num2) { }

        // 2. 묵시적 형변환 Block, Strict MODE
        // explicit SoSimple(const SoSimple &copy) : num(copy.num1), num2(copy.num2) { }
        
        void ShowSimpleData (){
            cout << num1 << endl << num2 << endl;
        }
};

int main(){
    SoSimple a(1, 5);
    a.ShowSimpleData();

    //묵시적 형변환 Block, Strict MODE
    // explicit


}