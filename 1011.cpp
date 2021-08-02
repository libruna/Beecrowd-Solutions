#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {
	
	double raio, pi = 3.14159, volume;
	
	cin >> raio;
	
	volume = ((4 / 3.0) * (pi * pow(raio, 3)));
	
	cout << "VOLUME = " << fixed << setprecision(3) << volume << endl;
	
	return 0;
}	
	
	
	
