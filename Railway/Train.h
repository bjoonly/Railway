#pragma once
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
struct Time {
	short h, m, s;
	Time(short h=0, short m=0, short s=0);
	void SetH(short h);
	void SetM(short m);
	void SetS(short s);
	friend ostream& operator<<(ostream& out, const Time& t);
};

class Train{
	int number;
Time departureTime;
string destination;

public:
	Train(int number=0, string destination="No destination", short h=0, short m=0, short s=0);
	bool operator<(const Train& t2)const {
		return departureTime.h < t2.departureTime.h || departureTime.h == t2.departureTime.h && departureTime.m < t2.departureTime.m || departureTime.h == t2.departureTime.h && departureTime.m == t2.departureTime.m && departureTime.s < t2.departureTime.s;
	}
	int GetNumber()const {
		return number;
	}
	string GetDestination()const {
		return destination;
	}
	void SetNumer(int number) {
		this->number = number;
	}
	void GetDestination(string destination) {
		this->destination = destination;
	}
	void SetTime(short h, short m, short s) {
		departureTime.SetH(h);
		departureTime.SetM(m);
		departureTime.SetS(s);
	}
	friend ostream& operator<<(ostream& out, const Train& t);
	friend ofstream& operator<<(ofstream& out, const Train& t);
	friend ifstream& operator>>(ifstream& in, Train& t);
};

