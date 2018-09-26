#include "std_lib_facilities.h"
using namespace std;

int main() { //Változók felvétele
	double a;
	double largest = 1;
	double smallest = 0;
	vector <double> units;

	while (a != '|') { //Ciklus kezdete
		cout << "\n\nWrite a number: ";	
		cin >> a;
		if ( a >= largest ) { //Változó felvétele vektorba
    			largest = a;
			units.push_back(a);			   	
    		}
		
		else if ( a <= largest ) {
		    	smallest = a;
			units.push_back(a);		
		}	
		sort(units);
			cout << string(50, '\n'); //Szépítés
			cout << "Smallest: " << units.front() << '\n'; //Adatok kiírása
			cout << "Largest: " << units.back() << '\n';
			cout << "Total numbers: " << units.size() << '\n';
			cout << "Numbers in increasing order: ";
		for (int s = 0; s < units.size(); s++) {
			cout << units[s] << ", ";
		}

	}
}
