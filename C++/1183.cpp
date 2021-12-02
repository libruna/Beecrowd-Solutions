#include <iostream>

using namespace std;

int main() {
	
	double matriz[12][12], soma = 0.0;
	int cont = 0;
	char op;
	
	cin >> op;
	
	for(int i = 0; i < 12; i++) {
		for(int j = 0; j < 12; j++) {
			cin >> matriz[i][j];
			if(j > i) {
				soma += matriz[i][j];
				cont += 1;
			}
		}
	}

	if(op == 'S') 
		cout << soma << endl;
	else 
		cout << soma/cont << endl;
	
	return 0;
}
