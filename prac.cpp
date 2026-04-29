#include <iostream>
#include <cstring>

using namespace std;

class Employee {
private:
    char name[100];
public:
    Employee(char * name){
        strcpy(this -> name, name);
    }
    void showYourName() const {
        cout << name << endl;
    }
};



class PermanetWorker : public Employee {
private:
    int salary;
public:
    PermanetWorker(char * name, int money) : Employee(name), salary(money) {    }
    int GetPay() const {
        return salary;
    }
    void ShowSalaryInfo(){
        cout << GetPay() << endl;
    } 
};


class TemporaryWorker : public Employee {
private:
    int workTime;
    int payPerHour;
public:
    TemporaryWorker(char * name, int pay) : Employee(name), workTime(0),payPerHour(pay) {

    }
    void AddworkTime(int time){
        workTime += time;
    }
    int GetPay() const {
        return workTime * payPerHour;
    }
    void ShowSalaryInfo() const {
        showYourName();
        cout << GetPay() << endl;
    }
};

class SalaesWorker : public PermanetWorker {
private:
    int salesResult;
    double bonusRatio;
public:
    SalaesWorker(char * name, int money, double ratio)
        : PermanetWorker(name, money), salesResult(0), bonusRatio(ratio) {

        }

    void AddSalesResult(int value) {
        salesResult += value;
    }    

    int GetPay() const {
        return PermanetWorker::GetPay()
            + (int) (salesResult * bonusRatio);
    }
    void ShowSalaryInfo(){
        cout << GetPay() << endl;
    } 
};

class EmployeeHandler {
private:
    Employee* empList[50];
    int empNum;
public:
    EmployeeHandler() : empNum(0)
    { }

    void AddEmployee(Employee* emp) {
    empList[empNum++]=emp;
    }

    void ShowAllSalaryInfo() const {
        for(int i=0; i<empNum; i++) {
            // empList[i] -> ShowSalaryInfo();
        }
    }

    void ShowTotalSalary() const {
        int sum=0;
        /* for(int i=0; i<empNum; i++)
        sum+=empList[i]->GetPay(); */
        cout<<"salary sum: "<<sum<<endl;
    }
    ~EmployeeHandler() {
        for(int i=0; i<empNum; i++)
        delete empList[i];
    }

};


int main() {
    EmployeeHandler handler;
    handler.AddEmployee(new PermanetWorker("kim", 1000));
    handler.AddEmployee(new PermanetWorker("lee", 2000));
    handler.AddEmployee(new PermanetWorker("jung", 1500));

    handler.ShowAllSalaryInfo();
    handler.ShowTotalSalary();
}