#include <iostream>
#include <cstring>
using namespace std;

class Person {
private:
    char name[20];
    int age;

public:
    Person(const char* myname, int myage) : age(myage) {
        strncpy(name, myname, sizeof(name) - 1);
        name[sizeof(name) - 1] = '\0';
    }

    void ShowPersonInfo() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Person p("Kim", 23);
    p.ShowPersonInfo();

    return 0;
}
