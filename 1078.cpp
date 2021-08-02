#include <iostream>

using namespace std;

int main() {
	
	int n, tabuada;
	
	cin >> n;
	
	if(n > 2 || n < 1000) {
		for(int i = 1; i <= 10; i++) {
			tabuada = n * i;
			cout << i << " x " << n << " = " << tabuada << endl;
		}
	}
	
	return 0;
}

