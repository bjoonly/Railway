#include"Railway.h"
#include<exception>
int main(){
	Railway r1,r2;
	cout << "Add trains:\n";
	r1.AddTrain(Train(10, "Rivne", 10, 15, 0));
	r1.AddTrain(Train(5, "Rivne", 8, 30, 0));
	r1.AddTrain(Train(12, "Lviv", 10, 10, 10));
	r1.AddTrain(Train(7, "Kiyv", 7, 30, 10));
	cout << r1;
	cout << "\n\nShow by destination:\n";
	r1.ShowByDestination("Rivne");
	cout << "\n\nShow by number:\n";
	r1.ShowByNumber(12);
	cout << "\nSave in file.\n";
	ofstream fout("Test.txt");
	fout << r1;
	fout.close();
	cout << "\n\nSet time:\n";
	r1.SetTime(10, 12, 12, 12);
	r1.ShowByNumber(10);
	cout << "\n\nSort by time:\n";
	r1.SortByTime();
	cout << r1;
	cout << "Load from file: \n";
	ifstream fin("Test.txt");
	fin >> r2;
	cout << r2;
	fin.close();

	return 0;
}