#include <iostream>

using namespace std;

int main() {
	
	int n, menor = 99999, posicao = 0;
	
	cin >> n;
	
	int vetor[n];
	
	for(int i = 0; i < n; i++) {
		cin >> vetor[i];
		if(vetor[i] < menor){
			menor = vetor[i];
			posicao = i;
		}
	}
	
	cout << "Menor valor: " << menor << endl;
	cout << "Posicao: " << posicao<< endl;
	
	return 0;
}

