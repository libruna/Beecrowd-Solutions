#include <iostream>

using namespace std;

int main() {
	
	int n, cem, cinquenta, vinte, dez, cinco, dois, um;
	
	cin >> n;
	
	cem = n/100;
	cinquenta = (n - (cem*100)) / 50;
	vinte = (n - (cem*100 + (cinquenta*50))) / 20;
	dez = (n - (cem*100 + (cinquenta*50) + (vinte*20))) / 10;
	cinco = (n - (cem*100 + (cinquenta*50) + (vinte*20) + (dez*10))) / 5;
	dois = (n - (cem*100 + (cinquenta*50) + (vinte*20) + (dez*10) + (cinco*5))) / 2;
	um = (n - (cem*100 + (cinquenta*50) + (vinte*20) + (dez*10) + (cinco*5) + (dois*2))) / 1;
	
	cout << n << endl;
	cout << cem << " nota(s) de R$ 100,00" << endl;
	cout << cinquenta << " nota(s) de R$ 50,00" << endl;
	cout << vinte << " nota(s) de R$ 20,00" << endl;
	cout << dez << " nota(s) de R$ 10,00" << endl;
	cout << cinco << " nota(s) de R$ 5,00" << endl;
	cout << dois << " nota(s) de R$ 2,00" << endl;
	cout << um << " nota(s) de R$ 1,00" << endl;
	
	return 0;
}
