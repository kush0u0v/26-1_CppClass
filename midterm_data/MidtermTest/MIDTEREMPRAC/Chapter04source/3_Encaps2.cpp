#include <iostream>
using namespace std;

class SinivelCap    // capsule for runny nose
{
public:
	void Take() const {cout<<"Runny nose is gone."<<endl;}
};

class SneezeCap    // capsule for sneezing
{
public:
	void Take() const {cout<<"Sneezing stopped."<<endl;}
};

class SnuffleCap   // capsule for nasal congestion
{
public:
	void Take() const {cout<<"Nose is cleared."<<endl;}
};

class CONTAC600 
{
private:
	SinivelCap sin;
	SneezeCap sne;
	SnuffleCap snu;

public:
	void Take() const
	{
		sin.Take();
		sne.Take();
		snu.Take();
	}
};

class ColdPatient
{
public:
	void TakeCONTAC600(const CONTAC600 &cap) const {
		cap.Take(); 
	}
};

int main(void)
{
	CONTAC600 cap;
	ColdPatient sufferer;
	sufferer.TakeCONTAC600(cap);
	return 0;
}