#include<iostream>
using namespace std;

class Point
{
public:
	int x;   // x coordinate range: 0 to 100.
	int y;   // y coordinate range: 0 to 100.
};

class Rectangle
{
public:
	Point upLeft;
	Point lowRight;

public:
	void ShowRecInfo()
	{
		cout<<"upLeft: "<<'['<<upLeft.x<<", ";
		cout<<upLeft.y<<']'<<endl;
		cout<<"lowRight: "<<'['<<lowRight.x<<", ";
		cout<<lowRight.y<<']'<<endl<<endl;
	}
};

int main(void)
{
	Point pos1={-2, 4};
	Point pos2={5, 9};
	Rectangle rec={pos2, pos1};
	rec.ShowRecInfo();
	return 0;
}
