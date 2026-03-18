// 다음, 환전을 하고 싶은 메뉴를 선택한다.
// 0. 종료  1. 원→미국  2. 원→중국  3. 원→일본
// 4. 미국→원  5. 중국→원  6. 일본→원
// 환전하고 싶은 금액을 입력하면, 환전 금액이 출력된다.

#include <iostream>
using namespace std;

class Exchange {
    int usa_e, chi_e, jap_e, kor = 1000;
    double ans;


    public:
        void init(int usa, int chi, int jap){
            usa_e = usa;
            chi_e = chi;
            jap_e = jap;
        }

        double tousa(int won){
            return double(won)/ double (usa_e);
        }
        double tochi(int won){
            return double(won)/ double (chi_e);
        }
        double tojap(int won){
            return double(won)/ double (jap_e) * 100;
        }

        double uasto(int won){
            return double(won) * double(usa_e);
        }
        double chito(int won){
            return double(won) * double(chi_e);
        }
        double japto(int won){
            return double(won) * double(jap_e) / 100;
        }
};

int main(){
    Exchange exchange;
    int a,b,c;
    cin >> a >> b >> c;
    exchange.init(a, b, c);

    while(1){
        int menu, won, temp;
        cin >> menu;
        cout.setf(ios::fixed, ios::floatfield);
        cout.precision(2);

        switch (menu) {
            case 0:
                return 0;
            case 1: //원→미국
                cin >> won;
                cout << exchange.tousa(won) << endl;
                break;
            case 2: // 원→중국
                cin >> won;
                cout << exchange.tochi(won) << endl;
                break;
            case 3: // 원→일본
                cin >> won;
                cout << exchange.tojap(won) << endl;
                break;
            case 4: // 미국→원
                cin >> won;
                cout << exchange.uasto(won) << endl;
                break;
            case 5: // 중국→원
                cin >> won;
                cout << exchange.chito(won) << endl;
                break;
            case 6: // 일본→원
                cin >> won;
                cout << exchange.japto(won) << endl;
                break;
        }
    }

    return 0;
}