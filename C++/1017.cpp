#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	int tempo, velocidade;
	float gasto;
	
	cin >> tempo;
	cin >> velocidade;
	
	gasto = (tempo * velocidade) / 12.0;
	
	cout <<  fixed << setprecision(3) << gasto << endl;
	
	return 0;
}
