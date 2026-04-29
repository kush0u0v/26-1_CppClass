#include <iostream>
using namespace std;

class Exchange {
private:
    int usd;   // 미국 환율
    int cny;   // 중국 환율
    int jpy;   // 일본 환율 (100엔 기준)

public:
    Exchange(int u, int c, int j) {
        usd = u;
        cny = c;
        jpy = j;
    }

    double wonToUsd(int money) {
        return (double)money / usd;
    }

    double wonToCny(int money) {
        return (double)money / cny;
    }

    double wonToJpy(int money) {
        return (double)money * 100 / jpy;
    }

    double usdToWon(int money) {
        return (double)money * usd;
    }

    double cnyToWon(int money) {
        return (double)money * cny;
    }

    double jpyToWon(int money) {
        return (double)money * jpy / 100;
    }
};

int main() {
    int usd, cny, jpy;
    cin >> usd >> cny >> jpy;

    Exchange ex(usd, cny, jpy);

    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(2);

    int menu;

    while (true) {
        cin >> menu;

        if (menu == 0)
            break;

        int money;
        cin >> money;

        if (menu == 1)
            cout << ex.wonToUsd(money) << endl;
        else if (menu == 2)
            cout << ex.wonToCny(money) << endl;
        else if (menu == 3)
            cout << ex.wonToJpy(money) << endl;
        else if (menu == 4)
            cout << ex.usdToWon(money) << endl;
        else if (menu == 5)
            cout << ex.cnyToWon(money) << endl;
        else if (menu == 6)
            cout << ex.jpyToWon(money) << endl;
    }

    return 0;
}