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

class ColdPatient
{
public:
	void TakeSinivelCap(const SinivelCap &cap) const {cap.Take();}
	void TakeSneezeCap(const SneezeCap &cap) const {cap.Take();}
	void TakeSnuffleCap(const SnuffleCap &cap) const{cap.Take();}
};

int main(void)
{
	SinivelCap scap;
	SneezeCap zcap;
	SnuffleCap ncap;
	
	ColdPatient sufferer;
	sufferer.TakeSinivelCap(scap);
	sufferer.TakeSneezeCap(zcap);
	sufferer.TakeSnuffleCap(ncap);
	return 0;
}