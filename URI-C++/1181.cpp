#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	double matriz[12][12], soma = 0.0;
	int linha;
	char op;

	cin >> linha;
	cin >> op;
	
	for(int i = 0; i < 12; i++) {
		for(int j = 0; j < 12; j++) {
			cin >> matriz[i][j];
			if(i == linha) 
				soma += matriz[i][j];
		}
	}

	if(op == 'S') 
		cout << fixed << setprecision(1) << soma << endl;
	else 
		cout << fixed << setprecision(1) << soma/12.0 << endl;
	
	return 0;
}

