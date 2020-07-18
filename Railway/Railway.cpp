#include "Railway.h"

void Railway::AddTrain(const Train& train){
	trains.push_back(train);
}

void Railway::ShowByNumber(int number) const {
	for (size_t i = 0; i < trains.size(); i++) {
		if (trains[i].GetNumber() == number) {
			cout << trains[i];
			break;
		}
	}
}

void Railway::SetTime(int number, short h, short m, short s){
	for (size_t i = 0; i < trains.size(); i++) {
		if (trains[i].GetNumber() == number) {
			trains[i].SetTime(h,m,s);
			break;
		}
	}
}

void Railway::ShowByDestination(string destination) const {
	for (size_t i = 0; i < trains.size(); i++)
		if (trains[i].GetDestination() == destination)
			cout << trains[i];
}

void Railway::SortByTime() {
	sort(trains.begin(), trains.end());
}

ostream& operator<<(ostream& out, const Railway& t) {
	for (size_t i = 0; i < t.trains.size(); i++)
		out << i + 1 << "." << t.trains[i];
	out << endl;
	return out;
}

ofstream& operator<<(ofstream& out, const Railway& t) {
	out << t.trains.size() << endl;
	for (size_t i = 0; i < t.trains.size(); i++)
		out << t.trains[i];
	return out;
}

ifstream& operator>>(ifstream& in, Railway& t) {
	t.trains.clear();
	Train tmp;
	int size;
	in >> size;
	for (int i = 0; i < size; i++) {
		in >> tmp;
		t.AddTrain(tmp);
	}
	return in;
}