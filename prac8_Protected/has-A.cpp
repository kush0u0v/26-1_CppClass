#include <iostream>
using namespace std;

class Gun {
    private:
        int bullet;
    public:
        Gun(int bnum) : bullet(bnum) {

        }
        void Shut() {
            cout << "BBANG" << endl;
            bullet--;
        }
};

// class Police : public Gun {
//     private:
//         int handcuffs;
//     public:
//         Police(int bnum, int bcuff)
//             : Gun(bnum), handcuffs(bcuff) {

//             }
//         void PutHandcuff(){
//             cout << "Snap";
//             handcuffs--;
//         }
// };

class Police {
    private:
        int handcuffs;
        Gun * pistol;
    public:
        Police(int bnum, int bcuff) 
            : handcuffs(bcuff) {
                if(bnum > 0)
                    pistol = new Gun(bnum);
                else
                    pistol = NULL;
        }

        void PutHandcuff() {
            cout << "SNAP" << endl;
            handcuffs --;
        }

        void Shut() {
            
            if (pistol == NULL) {
                cout << "NOOOOO" << endl;
            } else {
                pistol -> Shut();
            }

        }

        ~Police() {
            if(pistol != NULL){
                delete pistol;
            }
        }
            
};

int main() {
    Police A(5, 3);
    A.Shut();
    A.PutHandcuff();

    Police B(0, 3);
    B.Shut();
    B.PutHandcuff();
}