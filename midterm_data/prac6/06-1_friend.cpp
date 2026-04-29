#include <iostream>
#include <cstring>
using namespace std;

class girl;

class boy {
    private:
        int h;
        friend class girl;
    public:
        boy(int len) : h(len) { };

        void showYourFriendInfo(girl &frn);
        
};

class girl {
    private:
        char phNum[20];
    public:
        girl(const char* num) {
            strcpy(phNum, num);
        }

        void showYourFriendInfo(boy &frn);

        friend class boy;
};

void boy::showYourFriendInfo(girl &frn){
    cout << frn.phNum << endl;
}
void girl::showYourFriendInfo(boy &frn){
    cout << frn.h << endl;
}

int main(){
    boy a (170);
    girl b ("010-3123-3131");
    a.showYourFriendInfo(b);
    b.showYourFriendInfo(a);
}