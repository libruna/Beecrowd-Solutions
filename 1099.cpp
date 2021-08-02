#include <iostream>

using namespace std;

int main() {
	
	int n, x, y, min = 0, max = 0, soma = 0;
	
	cin >> n;
	
	for(int i = 0; i < n; i++) {
		cin >> x >> y;
		
		if(x < y) {
			min = x;
			max = y;
		}
		else {
			min = y;
			max = x;
		}
		
		for(int j = min + 1; j < max; j++) {
			if(j%2 == 1) 
				soma += j;
		}
		cout << soma << endl;
		soma = 0;
	}
	
	return 0;
}
