#include <iostream>

using namespace std;

int main() {
	
	int n, linha = 1;
	
	cin >> n;
	
	for(int i = 1; i <= n*4; i++) {
		if(linha == 4) {
			cout << "PUM" << endl;
			linha = 1;
		}
		else {
			cout << i << " ";
			linha += 1;
		}
	}
	
	return 0;
}
