#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	double valor, soma, media, positivos;
	
	for(int i = 0; i < 6; i++) {
		cin >> valor;
		if (valor > 0) {
			positivos += 1; 
			soma += valor;
		}
	}
	
	cout << positivos << " valores positivos" << endl;
	
	media = soma / positivos;
		
	cout << fixed << setprecision(1) << media << endl;
		
	return 0;
	
}

