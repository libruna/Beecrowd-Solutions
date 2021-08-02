#include <iostream>

using namespace std;

int numero_perfeito(int numero) {
	int soma = 0;
	for(int i = 1; i < numero; i++) {
		if(numero%i == 0)
			soma += i;
	}
	if(soma == numero) 
		cout << numero << " eh perfeito" << endl;
	else 
		cout << numero << " nao eh perfeito" << endl;
}

int main() {
	
	int n, numero;;
	
	cin >> n;
	
	for(int i = 0; i < n; i++) {
		cin >> numero;
		numero_perfeito(numero);
	}
	
	return 0;
}
