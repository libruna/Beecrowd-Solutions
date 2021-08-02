#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
	
	int codigo, quant;
	double total = 0;
	
	cin >> codigo >> quant;
	
	if (codigo == 1){
		total = quant * 4.00; 
		cout << setprecision(2) << fixed;
		cout << "Total: R$ " << total; 
	}
	else if (codigo == 2) {
		total = quant * 4.50;
		cout << setprecision(2) << fixed;
		cout << "Total: R$ " << total; 
	}
	else if (codigo == 3) {
		total = quant * 5.00;
		cout << setprecision(2) << fixed;
		cout << "Total: R$ " << total; 
	}
	else if (codigo == 4) {
		total = quant * 2.00;
		cout << setprecision(2) << fixed;
		cout << "Total: R$ " << total; 
	}
	else {
		total = quant * 1.50;
		cout << setprecision(2) << fixed;
		cout << "Total: R$ " << total; 
	}
	
	return 0;
}
