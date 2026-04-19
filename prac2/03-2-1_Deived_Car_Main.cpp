#include "03-2-2_Deived_Car_Header.h"

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