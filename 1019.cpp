#include <iostream>

using namespace std;

int main() {
	
	int n, horas, minutos, segundos;
	
	cin >> n;
	
	horas = n/3600;
	minutos = (n - (horas*3600)) / 60 ;
	segundos = n - ((horas*3600) + (minutos*60));
	
	cout << horas << ":" << minutos << ":" << segundos << endl;
	
	return 0;
}
