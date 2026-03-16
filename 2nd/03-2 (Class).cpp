#include <iostream>
#include <string.h>
using namespace std;

namespace CAR_CONST {

    enum {
        ID_LEN = 20,
        FUEL_STEP = 2,
        ACC = 10,
        BRK = 10,
        MAX_SPD = 200
    };
    
};

class Car {
    private:
        char gamerID[CAR_CONST::ID_LEN];
        int fule_gage;
        int curSPD;
    public:
        void INIT_member (char * ID, int fule);
        void SHOW_carState ();
        void Accel();
        void Break();
};

void Car::INIT_member(char * ID, int fuel){
    strcpy(gamerID, ID);
    fule_gage = fuel;
    curSPD = 0;
};

void Car::SHOW_carState() {
    cout << gamerID << endl << fule_gage << endl << curSPD << endl;
};

void Car::Accel () {
    if (fule_gage <= 0) {
        return;
    } else {
        fule_gage -= CAR_CONST::FUEL_STEP;
    }

    if ((curSPD + CAR_CONST::ACC) >= CAR_CONST::MAX_SPD) {
        curSPD = CAR_CONST::MAX_SPD;
        return;
    }
    curSPD += CAR_CONST::ACC;
};

void Car::Break () {
    if(curSPD < CAR_CONST::BRK) {
        curSPD = 0;
        return;
    } 
    curSPD -= CAR_CONST::BRK;
};

int main() {
    Car one;
    one.INIT_member("one", 100);
    one.Accel();
    one.Break();

    Car two;
    two.INIT_member("two", 100);

    one.Accel();
    two.Accel();

    one.SHOW_carState();
    two.SHOW_carState();

    return 0;
}