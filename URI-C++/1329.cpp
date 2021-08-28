#include <iostream>

using namespace std;

int main() {
	
	int n = 1, cara = 0, coroa = 0;
	int *vetor;
	
	while(true) {
		cin >> n;
		vetor = new int[n];
		
		if(n == 0)
			break;

		for(int i = 0; i < n; i++) {
			cin >> vetor[i];
			if(vetor[i] == 0) 
				cara += 1;
			else 
				coroa += 1;
		}
		cout << "Mary won " << cara << " times and John won " << coroa << " times" << endl;
		coroa = 0, cara = 0;
	}
	
	delete [] vetor;
	
	return 0;
}

