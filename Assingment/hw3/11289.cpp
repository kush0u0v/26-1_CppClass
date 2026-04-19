// Player 클래스의 멤버 변수는 다음과 같다.
// 1. 플레이어 이름(string)
// 2. 플레이어의 체력(int)
// 3. 플레이어의 경험치(int)

// PlayerChanger 클래스의 friend 선언
// print_player_information 함수의 friend 선언

// Player 클래스의 멤버 함수는 다음과 같다.
// 1. 플레이어의 이름, 체력 및 경험치를 매개변수로 받는 생성자

// PlayerChanger 클래스의 멤버 변수는 없다.

// PlayerChanger 클래스의 멤버 함수의 원형은 다음과 같다.
// 1. 플레이어 객체와 string을 매개변수로 입력받아 플레이어 객체의 이름을 변경

// void set_player_name(Player &p, string changed_name)

// *p를 참조자로 입력받는 이유에 대해 생각해보세요. 

// print_player_information 함수의 원형은 다음과 같다.
// 1. 플레이어 객체를 매개변수로 입력받아 플레이어 객체의 정보를 출력

// void print_player_information(const Player &p)

// *p를 const 참조자로 입력받는 이유에 대해 생각해보세요.
#include <iostream>
using namespace std;

class PlayerChanger;

class Player{
    private:
        string name;
        int hp;
        int xp;
        friend class PlayerChanger;
        friend void print_player_information(const Player &p);
    public:
        Player(string a, int b, int c) : name(a), hp(b), xp(c){

        }
};

class PlayerChanger{
    public:
        void set_player_name(Player &p, string changed_name){
            p.name = changed_name;
        }
};

void print_player_information(const Player &p) {
    cout << p.name << " " << p.hp << " " << p.xp << endl;
}



int main()
{
    string name;
    int hp, xp;
    cin >> name >> hp >> xp;

    Player hero( name,hp,xp );
    print_player_information(hero);

    PlayerChanger pc;
    string another_name;
    cin >> another_name;

    pc.set_player_name(hero, another_name);
    print_player_information(hero);
}