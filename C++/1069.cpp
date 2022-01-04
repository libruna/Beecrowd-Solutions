#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main(){

	int n;
	
	cin >> n;
	string caso;
	
	while(n--) {
		 
		int cont = 0;
		int cont2 = 0;
		
		cin >> caso;
		
		for(int i = 0; i < caso.size(); i++) {
			if(caso[i] == '<') {
				cont++;
			}
			if(caso[i] == '>' && cont > 0) {
				cont2++;
				cont--;
			}
		}
		cout << cont2 << endl;
	}
	
	return 0;
}
