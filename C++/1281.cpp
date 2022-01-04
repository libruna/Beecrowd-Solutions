#include <iostream>
#include <iomanip>

using std::cout;		using std::string;
using std::endl;		using std::setprecision;
using std::cin;			using std::fixed;

struct Feira{
	string nome;
	float preco;
};

int main() {
	
	int n, m, p, qtde;
	string nome, nomeProduto;
	float preco;
	
	cin >> n;
	
	while(n--) {
		
		float valor = 0;
		
		cin >> m;
		Feira feira[m];	
		
		for(int i = 0; i < m; i++) {
			cin >> nome;
			cin >> preco;
			
			feira[i].nome = nome;
			feira[i].preco = preco;
		}
		
		cin >> p;
		
		for(int i = 0; i < p; i++) {
			cin >> nomeProduto;
			cin >> qtde;
				
			for(int i = 0; i < m; i++) {
				if(nomeProduto == feira[i].nome) {
					valor += feira[i].preco * qtde;
				}
			}
		}
		cout << setprecision(2) << fixed << "R$ " << valor << endl;
	}

	return 0;
}

