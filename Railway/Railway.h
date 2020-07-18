#pragma once
#include"Train.h"
#include<vector>
#include<algorithm>
class Railway {
	vector<Train>trains;
public:
	void AddTrain(const Train& train);
	void ShowByNumber(int number)const;
	void SetTime(int number, short h, short m, short s);
	void ShowByDestination(string destination)const;
	void SortByTime();
	friend ostream& operator<<(ostream& out, const Railway& t);
	friend ofstream& operator<<(ofstream& out, const Railway& t);
	friend ifstream& operator>>(ifstream& in, Railway& t);
};

