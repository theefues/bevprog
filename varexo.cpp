#include "std_lib_facilities.h"

int main() {
	int a;
	int b;

	cout << "Adj meg egy számot: ";
	cin >> a;
	cout << "Adj meg egy másik számot: ";
	cin >> b;
	
	cout << "Megadott számok: " << a << " és " << b << '\n';
	
	a = a^b;
	b = b^a;
	a--;
	
	cout << "Felcserélés után: " << a << " és "<< b << '\n';
}
