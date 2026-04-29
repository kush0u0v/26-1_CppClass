#include <iostream>

using namespace std;

class Temporary{
    private:
        int num;
    
    public:
        Temporary(int n) : num (n) {
            cout << "created : " << num << endl;
        }

        ~Temporary() {
            cout << "\nkill : " << num << endl;
        }

        void showTempInfo(){
            cout << num << endl;
        }
};

int main(){
    Temporary(200);
    Temporary(200).showTempInfo();

    const Temporary &ref = Temporary(400);
}