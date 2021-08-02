#include <iostream>

using namespace std;

int primo(int numero) {
	int divisor = 0;
	for(int i = 1; i <= numero; i++) {
		if(numero%i == 0)
			divisor += 1;
	}
	if(divisor == 2) 
		cout << numero << " eh primo" << endl;
	else 
		cout << numero << " nao eh primo" << endl;
}

int main() {
	
	int n, numero;
	
	cin >> n;
	
	for(int i = 0; i < n; i++) {
		cin >> numero;
		primo(numero);
	}
	
	return 0;
}

