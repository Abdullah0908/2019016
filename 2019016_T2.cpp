#include <iostream>
#include<fstream>
using namespace std;
int main()
{
	cout << " Writing to file " << endl;
	ofstream fout;
	ifstream fin;
	fout.open("Task 2", ios::out);
	int age; char name[15];
	cout << " Enter your name: ";
	cin >> name;
	cout << endl;
	cout << " Enter your age: ";
	cin >> age;
	cout << endl;
	if (fout) {
		fout << name << endl;
		fout << age << endl;
	}
	else
		cout << " error ";
	fout.close();
	fin.open("Task2", ios::in);
	int Rage; char Rname[15];
	if (fin)
	{
		fin >> Rname;
		fin >> Rage;

	}
	cout << " Reading from the file " << Rname << endl << Rage;



}

