#include <iostream>
#include <string>

using namespace std;

int main() {
	
	string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char letra;
	
	cin >> letra;
	
	for(int i = 0; i < alphabet.size(); i++) {
		if(letra == alphabet[i]) 
			cout << i + 1 << endl;
	}
	
	return 0;
}
