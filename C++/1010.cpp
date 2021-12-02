#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	int pecas1, quant1, pecas2, quant2;
	double valor1, valor2, total = 0;
	
	cin >> pecas1 >> quant1 >> valor1;
	cin >> pecas2 >> quant2 >> valor2;
	
	total = (quant1 * valor1) + (quant2 * valor2);
	
	cout << setprecision(2) << fixed;
	cout << "VALOR A PAGAR: R$ " << total << endl;
	
	return 0;
}
