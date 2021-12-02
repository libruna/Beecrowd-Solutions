#include <iostream>

using namespace std;

int main() {
	
	int cem, troco, cinquenta, vinte, dez, cinco, dois, moeda1, moeda50, moeda25, moeda10, moeda5, moeda01;
	double n;
	
	cin >> n;
	
	troco = n;
	int moedas = (n - troco) * 100;
	
	cem = n/100;
	troco = troco%100;
	cinquenta = troco / 50;
	troco = troco%50;
	vinte = troco / 20;
	troco = troco%20;
	dez = troco / 10;
	troco = troco%10;
	cinco = troco / 5;
	troco = troco%5;
	dois = troco / 2;
	troco = troco%2;
	moeda1 = troco / 1;
	
	moeda50 = moedas / 50;
	moedas = moedas%50;
	moeda25 = moedas / 25;
	moedas = moedas%25;
	moeda10 = moedas / 10;
	moedas = moedas%10;
	moeda5 = moedas / 5;
	moedas = moedas%5;
	moeda01 = moedas / 1;
	
	cout << "NOTAS:" << endl;
	cout << cem << " nota(s) de R$ 100.00" << endl;
	cout << cinquenta << " nota(s) de R$ 50.00" << endl;
	cout << vinte << " nota(s) de R$ 20.00" << endl;
	cout << dez << " nota(s) de R$ 10.00" << endl;
	cout << cinco << " nota(s) de R$ 5.00" << endl;
	cout << dois << " nota(s) de R$ 2.00" << endl;
	
	cout << "MOEDAS:" << endl;
	cout << moeda1 << " moeda(s) de R$ 1.00" << endl;
	cout << moeda50 << " moeda(s) de R$ 0.50" << endl;
	cout << moeda25 << " moeda(s) de R$ 0.25" << endl;
	cout << moeda10 << " moeda(s) de R$ 0.10" << endl;
	cout << moeda5 << " moeda(s) de R$ 0.05" << endl;
	cout << moeda01 << " moeda(s) de R$ 0.01" << endl;
	
	return 0;
}
