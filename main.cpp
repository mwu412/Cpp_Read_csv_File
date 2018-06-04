#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

	//ifstream file("PeriodicTable_V2.csv");
	ifstream file;
	file.open("PeriodicTable_V2.csv");
	if (file.is_open()) {
		while (file.good()) {
			string element;
			double mass;
			getline(file, element, ',');	//getline will stop when it see ',' (in csv: column1,column2,...)     
			//getline only takes string;
			file >> mass;	
			file.ignore();	//ignore '\n'
			cout << "Map[" << element << "] = " << mass << ";" << endl;
		}
	}

	file.close();

	system("pause");
	return 0;
}
