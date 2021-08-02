#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	int num, horas;
	double valor, salario;
	
	cin >> num >> horas >> valor;
	
	salario = horas * valor;
	
	cout << setprecision(2) << fixed;
	cout << "NUMBER " << num << endl;
	cout << "SALARY = U$ " << salario << endl;
	
	return 0;
}
