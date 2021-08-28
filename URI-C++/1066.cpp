#include <iostream>

using namespace std;

int main() {
	
	int n, par=0, impar=0, positivo=0, negativo=0;
	
	int i = 0;
	
	while (i < 5) {
		cin >> n;
		if(n%2 == 0) 
			par += 1;
		else 
			impar += 1;
		if(n > 0 && n != 0)
			positivo += 1;
		else if(n < 0 && n != 0)
			negativo += 1;
		i++;
	}
	
	cout << par << " valor(es) par(es)" << endl;
	cout << impar << " valor(es) impar(es)" << endl;
	cout << positivo << " valor(es) positivo(s)" << endl;
	cout << negativo << " valor(es) negativo(s)" << endl;
	
	return 0;
}	
