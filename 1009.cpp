#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	string nome;
	double salarioFixo, montante, total;
	
	cin >> nome;
	cin >> salarioFixo;
	cin >> montante;
	
	total = (0.15*  montante) + salarioFixo;
	
	cout << "TOTAL = R$ " <<  fixed << setprecision(2) << total << endl;
	
	return 0;
}	
	
