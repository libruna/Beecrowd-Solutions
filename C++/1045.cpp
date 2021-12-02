#include <iostream>
#include <math.h>

using namespace std;

int main() {
	
	double A, B, C, a = 0, b = 0, c = 0;
	
	cin >> A >> B >> C;
	
	if(A >= B && A >= C) {
		a = A;
		if(B >= C) {
			b = B;
			c = C;
		}
		else {
			b = C;
			c = B;
		}
	}
	else if(B >= A && B >= C) {
		a = B;
		if(A >= C) {
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
		if(B >= A) {
			b = B;
			c = A;
		}
		else {
			b = A;
			c = B;
		}
		
	}
	
	if(a >= b + c) 
		cout << "NAO FORMA TRIANGULO" << endl;
	else if(pow(a,2) == (pow(b,2) + pow(c,2))) 
		cout << "TRIANGULO RETANGULO" << endl;
	else if(pow(a,2) > (pow(b,2) + pow(c,2)))
		cout << "TRIANGULO OBTUSANGULO" << endl;
	else if(pow(a,2) < (pow(b,2) + pow(c,2)))
		cout << "TRIANGULO ACUTANGULO" << endl;
	if((a == b) && (a == c) && (b == c))
		cout << "TRIANGULO EQUILATERO" << endl;
	else if(a == b || a == c || b == c)
		cout << "TRIANGULO ISOSCELES" << endl;
	
	return 0;
}
