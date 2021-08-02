#include <iostream>
#include <string.h>

using namespace std;

int main() {
	
	string texto, aux;
	int x = 0;
	getline(cin, texto);
	
	x = texto.size();
	for(int i = 0; i < x; i++) {
		if((texto[i] >= 'A' && texto[i] <= 'Z') || (texto[i] >= 'a' && texto[i] <= 'z')) 
			texto[i] += 3;
	}
	for(int i = x - 1; i >= 0; i--) {
		aux += texto[i];
	}
	for(int i = x/2; i < x; i++) {
		texto[i] -= 1;
	}
    
	cout << texto << endl;
	
	return 0;
}
