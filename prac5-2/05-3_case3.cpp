#include <iostream>

using namespace std;

class SoSimple{
    private:
        int num;
    
    public:
        SoSimple(int n) : num(n) 
        { }

        SoSimple(const SoSimple& copy) : num(copy.num) {
            cout << "called SoSimple(const Sosimple& copy)" << endl;
        }

        SoSimple& AddNum(int n){
            num += n;
            return *this;
        }

        void ShowData(){
            cout << num << endl;
        }
};

SoSimple SimpleFuncObj(SoSimple ob) {
    return ob;
}

int main(){
    SoSimple a(6);
    a.ShowData();
    a.AddNum(5);
    
    SimpleFuncObj(a);
    a.ShowData();
}