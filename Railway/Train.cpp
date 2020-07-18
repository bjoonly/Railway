#include "Train.h"

ostream& operator<<(ostream& out, const Time& t) {
	if (t.h < 10)
		out << 0;
	out << t.h << ":";
	if (t.m < 10)
		out << 0;
	out << t.m << ":";
	if (t.s < 10)
		out << 0;
	out << t.s;
	return out;
}
ostream& operator<<(ostream& out, const Train& t) {
	cout << "Number: " << t.number << "\nDestination: " << t.destination << "\nTime: " << t.departureTime << endl;
	return out;
}
ofstream& operator<<(ofstream& out, const Train& t) {
	out <<""<< t.number << endl << t.destination << endl << t.departureTime.h << " " << t.departureTime.m << " " << t.departureTime.s << endl;
	return out;
}
ifstream& operator>>(ifstream& in, Train& t) {
	in >> t.number;
	in.ignore(1333, '\n');
	getline(in, t.destination);
	in >> t.departureTime.h;
	in >> t.departureTime.m;
	in >> t.departureTime.s;
	return in;
}

Train::Train(int number, string destination, short h, short m, short s) :number(number), departureTime(h, m, s), destination(destination) {}

Time::Time(short h, short m, short s) {
	SetH(h);
	SetM(m);
	SetS(s);
}

void Time::SetH(short h) {
	if (h < 0)
		h = 0;
	this->h = h;
}

void Time::SetM(short m) {
	if (m < 0)
		m = 0;
	this->m = m;
}

void Time::SetS(short s) {
	if (s < 0)
		s = 0;
	this->s = s;
}

