#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	double A, B, media = 0;
	
	cin >> A;
	cin >> B;
	
	media = ((A * 3.5) + (B * 7.5)) / 11;
	
	cout << "MEDIA = " << media << setprecision(5) << fixed <<  endl;
	
	return 0;
}
