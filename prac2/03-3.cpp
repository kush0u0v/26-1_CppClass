#include <iostream>
using namespace std;

class FruitSeller {
    private:
        int APPLE_PRICE;
        int numOfApples;
        int myMoney;

    public:
        void InitMembers(int price, int num, int money){
            APPLE_PRICE = price;
            numOfApples = num;
            myMoney = money;
        }
        void ShowSalesResult(){
            cout << "last Apple : " << numOfApples << endl;
            cout << "Mergen : " << myMoney << endl;
        }

        int SaleApples(int money){
            int num = money / APPLE_PRICE;
            numOfApples -= num;
            myMoney += money;
            return num;
        }
};

class FruitBuyer{
    int myMoney;
    int numOfapples;

    public:
        void InitMembers(int money){
            myMoney = money;
            numOfapples = 0;
        }
        void BuyApples(FruitSeller &seller, int money){
            numOfapples += seller.SaleApples(money);
            myMoney -= money;
        }
        void ShowBuyResult() {
            cout << "Now Account : " << myMoney << endl;
            cout << "Apple Now : " << numOfapples << endl; 
        }
} ;

int main(){
    FruitSeller seller;
    seller.InitMembers(1000, 20, 0);
    
    FruitBuyer buyer;
    buyer.InitMembers(5000);
    buyer.BuyApples(seller, 2000);

    cout << "Apple saller" << endl;
    seller.ShowSalesResult();

    cout << "Apple Buyer" << endl;
    buyer.ShowBuyResult();

    return 0;
}