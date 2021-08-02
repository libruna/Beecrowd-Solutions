#include <iostream>

using namespace std;

int main() {
	
	int A, B, C, a = 0, b = 0, c = 0;
	
	cin >> A >> B >> C;
	
	if(A <= B && A <= C) {
		a = A;
		if(B <= C) {
			b = B;
			c = C;
		}
		else {
			b = C;
			c = B;
		}
	}
	else if(B <= A && B <= C) {
		a = B;
		if(A <= C) {
			b = A;
			c = C;
		}
		else {
			b = C;
			c = A;
		}
	}
	else {
		a = C;
		if(B <= A) {
			b = B;
			c = A;
		}
		else {
			b = A;
			c = B;
		}
	}
	
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << endl;
	cout << A << endl;
	cout << B << endl;
	cout << C << endl;
	
	return 0;
}
