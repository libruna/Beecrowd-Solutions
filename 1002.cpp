#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {
	
	double raio, area, pi = 3.14159;;
	
	cin >> raio;
	
	area = pi*pow(raio, 2);
	
	cout << setprecision(4) << fixed;
	cout << "A=" << area << endl;
	
	return 0;
}
