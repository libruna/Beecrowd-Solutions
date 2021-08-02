#include <iostream>

using namespace std;

int main() {
	
	int n;
	
	while(cin >> n) {
		cout << n - 1 << endl;
		if(n == 9999)
			break;
	}
	
	return 0;

}

