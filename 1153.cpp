#include <iostream>

using namespace std;

int fatorial(int n, int fat = 1) {
	for(int i = 1; i <= n; i++)
		fat *= i;
	return fat;
}

int main() {
	
	int n;
	
	cin >> n;
	
	cout << fatorial(n) << endl;
	
	return 0;
}
