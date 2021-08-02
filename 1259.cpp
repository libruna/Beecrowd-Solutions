#include <iostream>

using namespace std;

void QuickPar(int vetor[], int inicio, int fim) {
	
	int pivo, aux, i, j, meio;
	i = inicio, j = fim;
	meio = (i + j) / 2;
	pivo = vetor[meio];
	
	do {
		while(vetor[i] < pivo) { i = i + 1; }
		while(vetor[j] > pivo) { j = j - 1; }
		if(i <= j) {
			aux = vetor[i];
			vetor[i] = vetor[j];
			vetor[j] = aux;
			i = i + 1;
			j = j - 1;
		}
	} while(j > i);
	
	if(inicio < j) { QuickPar(vetor, inicio, j); }
	if(i < fim) { QuickPar(vetor, i, fim); }
} 

void QuickImpar(int vetor[], int inicio, int fim) {
	
	int pivo, aux, i, j, meio;
	i = inicio, j = fim;
	meio = (i + j) / 2;
	pivo = vetor[meio];
	
	do {
		while(vetor[i] > pivo) { i = i + 1; }
		while(vetor[j] < pivo) { j = j - 1; }
		if(i <= j) {
			aux = vetor[i];
			vetor[i] = vetor[j];
			vetor[j] = aux;
			i = i + 1;
			j = j - 1;
		}
	} while(j > i);
	
	if(inicio < j) { QuickImpar(vetor, inicio, j); }
	if(i < fim) { QuickImpar(vetor, i, fim); }
} 

int main() {
	
	int n, num, cont = 0, cont2 = 0;
	cin >> n;
	int par[n], impar[n];
	
	for(int i = 0; i < n; i++) {
		cin >> num;
		if(num % 2 == 0) {
			par[cont] = num;
			cont++;
		}
		else {
			impar[cont2] = num;
			cont2++;
		}
	}
	
	QuickPar(par, 0, cont-1);
	
	for(int i = 0; i < cont; i++) 
		cout << par[i] << endl;
	
	QuickImpar(impar, 0, cont2-1);
		
	for(int i = 0; i < cont2; i++) 
		cout << impar[i] << endl; 
		
	return 0;
}

