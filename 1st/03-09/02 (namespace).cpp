#include <iostream>

namespace A {
    void simple(void);
}
namespace A {
    void sample(void) {
        std::cout << "sample" << std::endl;
    }
} // 위의 namespace와 같은 A에 위치 즉, 동일한 공간

namespace B {
    void simple(void);
}


int main(){
    A::simple();
    B::simple();
    
    A::sample();

    return 0;
}


void A::simple(void){
    std::cout << "A Function" << std::endl;
} 

void B::simple(void){
    std::cout << "B Function" << std::endl;
}