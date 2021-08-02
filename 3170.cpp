#include <iostream>

using namespace std;

int main() {
	
	int b, g, aux;
	
	cin >> b;
	cin >> g;
	
	if(b >= g/2) 
		cout << "Amelia tem todas bolinhas!" << endl;
	else {
		if(g%2 != 0) 
			g = g - 1;
			
		aux = (g/2) - b;
		cout << "Faltam " << aux << " bolinha(s)" << endl;
	}
	
	return 0;
}

