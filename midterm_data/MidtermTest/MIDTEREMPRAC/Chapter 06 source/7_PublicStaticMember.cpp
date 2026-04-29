#include <iostream>
using namespace std;

class SoSimple
{
public:
	static int simObjCnt;
public:
	SoSimple()
	{
		simObjCnt++; // Access case 1
	}
};
int SoSimple::simObjCnt=0;

int main(void)
{
	cout<<SoSimple::simObjCnt<<"th SoSimple object"<<endl;
	SoSimple sim1;
	SoSimple sim2;

	cout<<SoSimple::simObjCnt<<"th SoSimple object"<<endl; // Access case 2
	cout<<sim1.simObjCnt<<"th SoSimple object"<<endl;
	cout<<sim2.simObjCnt<<"th SoSimple object"<<endl; // Access case 3
	return 0;
}
