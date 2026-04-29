#include <iostream>
#include <cstring>
using namespace std;

class Person {
private:
    int age;
    char name[20];

public:
    Person(int myage, char * myname) : age(myage) {
        strcpy(name, myname);
    }

	void WhatYourName() const 
	{
		cout<<"My name is "<<name<<endl;
	}
	void HowOldAreYou() const 
	{
		cout<<"I'm "<<age<<" years old"<<endl;
	}

};

class UnivStudent : public Person 
{
private :
    char major[50];
public:
    UnivStudent(char * myname, int myage, char * mynamjor) 
        : Person (myage, myname) 
    {
        strcpy(major, mynamjor);
    }
    void whoareyou () const 
    {
		WhatYourName();
		HowOldAreYou();
		cout<<"My major is "<<major<<endl<<endl;
    }
};


int main(){
    UnivStudent a("lee", 23, "comp");
    a.whoareyou();

}