#include <iostream>
#include <cstring>
using namespace std;

// 0. 디폴트 복사 생성자는, 얕은 복사
class Person {
    private:
        char * name;
        int age;
    
    public:

    Person(char * myname, int myage) 
    {
        int len = strlen(myname) + 1;
        name = new char[len];
        strcpy(name, myname);
        age = myage;
    } // ANS : Abort Error (Delete)

    // 1. 깊은 복사 (Deep Copy) 
    Person (const Person& copy) : age (copy.age) 
    {
        name = new char [strlen(copy.name) + 1];
        strcpy(name, copy.name);
    }

    /// @brief /
    void ShowPersonInfo(){
        cout << name << endl << age << endl;
    }

    ~Person() {
        delete []name;
        cout << "terminated" << endl;
    }
};

int main(){
    char a[10] = "lee";
    Person man1 ( a, 13 );
    Person man2 ( a, 34 );

    Person man3 = move(man1); //

    man1.ShowPersonInfo();
    man2.ShowPersonInfo();

    return 0;
}