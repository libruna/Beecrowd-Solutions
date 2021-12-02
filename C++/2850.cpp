#include <iostream>

using namespace std;

int main() {
	
	string x;
	
	while(getline(cin, x)) {
		if(x == "esquerda")
			cout << "ingles" << endl;
		else if(x == "direita")
			cout << "frances" << endl;
		else if(x == "nenhuma") 
			cout << "portugues" << endl;
		else if(x == "as duas")
			cout << "caiu" << endl;
	}	
	
	return 0;
}

