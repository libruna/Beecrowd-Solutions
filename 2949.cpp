#include <iostream>
#include <string.h>

using namespace std;

int main() {
	
	string nome;
	char letra;
	int a = 0, e = 0, h = 0, m = 0, x = 0;
	int n;
	
	cin >> n;
	
	for(int i = 0; i < n; i++) {
		cin >> nome >> letra;
		if(letra == 'A')
			a += 1;
		else if(letra == 'E')
			e += 1;  
		else if(letra == 'H')
			h += 1;  
		else if(letra == 'M')
			m += 1;  
		else if(letra == 'X')
			x += 1;  
	} 
	
	cout << x << " Hobbit(s)" << endl;
	cout << h << " Humano(s)" << endl;
	cout << e << " Elfo(s)" << endl;
	cout << a << " Anao(s)" << endl;
	cout << m << " Mago(s)" << endl;
	
	return 0;
}
