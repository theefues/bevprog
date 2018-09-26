
#include "std_lib_facilities.h"
using namespace std;

int main() {
	double a; // Változók felvétele
	string unit;
	double largest = 1;
	double smallest = 0;
	vector <double> units;

	while (unit != "|") {  // Ciklus kezdete
		cout << "\n\nWrite a unit (cm, m, ft, in or | to terminate): ";	//Unit bekérése
		cin >> unit;
		
		if ( unit == "|") {
			return 0;
		}
		
		cout << "Write a number: ";  //Szám bekérése
		cin >> a;

		if ( unit == "cm" ) {  //Adott mértékegységnek megfelelő átváltás és beküldés a vektorba
    			a = a/100;
			units.push_back(a);			   	
    		}
		
		else if ( unit == "m" ) {
			units.push_back(a);		
		}	
		else if ( unit == "ft" ) {
			a = a/3.28;
			units.push_back(a);		
		}	
		else if ( unit == "in" ) {
			a = a/39.37;
			units.push_back(a);		
		}	

		sort(units); //Rendezés
			cout << string(50, '\n'); //Szépítés
			cout << "Smallest: " << units.front() << '\n'; //Adatok kiírása
			cout << "Largest: " << units.back() << '\n';
			cout << "Total numbers: " << units.size() << '\n';
			cout << "Numbers in increasing order: ";
		for (int i = 0; i < units.size(); i++) {
			cout << units[i] << ", ";
		}

	}
}
