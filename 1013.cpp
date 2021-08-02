#include <iostream>
#include <stdlib.h>

using namespace std;

int maior(int a, int b, int c) {
	int maiorAB, maiorABC;
	maiorAB = (a+b+abs(a-b)) / 2;
	return maiorABC = (maiorAB+c+abs(maiorAB-c)) / 2;
}

int main() { 

	int a, b, c;
	
	cin >> a >> b >> c;
	
	cout << maior(a, b, c) << " eh o maior" << endl;

	return 0;
}
