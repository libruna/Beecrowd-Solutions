#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	double matriz[12][12], soma = 0.0;
	char op;
	
	cin >> op;
	
	for(int i = 0; i < 12; i++) {
		for(int j = 0; j < 12; j++) 
			cin >> matriz[i][j];
	}
	
	for(int i  = 0; i <= 4; i++) {
		for(int j = i + 1; j <= 10 - i; j++) 
			soma += matriz[i][j];
	}
 
	if(op == 'S') 
		cout << fixed << setprecision(1) << soma << endl;
	else 
		cout << fixed << setprecision(1) << soma/30.0 << endl;
	
	return 0;
}
