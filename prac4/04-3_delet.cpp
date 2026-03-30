#include <iostream>
#include <cstring>
using namespace std;

class Person {
private:
    char * name;
    int age;

public:
    Person(char * myname, int myage) {
        int len = strlen(myname) + 1;
        name = new char[len];
        strcpy(name, myname);
        age = myage;
    }

    void ShowPersonInfo() const {
        cout << name << endl;
        cout << age << endl;
    }

    ~Person() {
        delete []name;
        cout << "Delet Complet" << endl;
    }
};

int main(){
    Person human1 ("kim", 23);
    Person human2 ("lee", 33);
    human1.ShowPersonInfo();
    human2.ShowPersonInfo();
}