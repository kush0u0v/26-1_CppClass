#include <iostream>
using namespace std;

// Account 클래스의 멤버 변수는 아래와 같다.
// 1. 총 계좌 수 (static int)
// 2. 계좌 이름 (string)
// 3. 잔액 (int)

// Account 클래스의 멤버 함수는 아래와 같다.
// 1. 계좌 이름(string)과 잔액(int) 을 매개변수로 받는 생성자
// 2. 현재의 총 계좌수를 출력하는 함수
// (static void print_total())
// 3. 소멸자

class Account{
    private:
        static int total;
        string name;
        int amount;

    public:
        Account(string a, int b) : name(a), amount(b) {
            total ++;
        }
        static void print_total(){
            cout << total << endl;
        }
        ~Account(){
            total--;
        }
};

int Account::total = 0;

int main()
{
    Account::print_total();
    Account kim( "kim", 10000 );
    Account::print_total();

    {
    Account lee( "lee", 20000 );
    Account::print_total();
    }
    Account::print_total();

    Account *park = new Account("Park", 50000);
    Account::print_total();
    delete park;
    Account::print_total();
    return 0;
}