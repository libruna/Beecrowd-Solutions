#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {
	
	double a, b, c, delta, r1, r2;
	
	cin >> a >> b >> c;
	
	delta = pow(b,2) - (4 * a * c);
	
	r1 = (-b + sqrt(delta)) / (2 * a);
	r2 = (-b - sqrt(delta)) / (2 * a);
	
	if (r1 == 0 || r2 == 0 || delta <= 0 || a == 0) {
		cout << "impossivel calcular" << endl;
		return 0;
	}
	else {
		cout << "R1 = " << fixed << setprecision(5) << r1 << endl;
		cout << "R2 = " << fixed << setprecision(5) << r2 << endl;
	}
	
	return 0;
}
