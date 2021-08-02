#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	double n1, n2, n3, n4, media, NotaExame, media2;
	
	cin >> n1 >> n2 >> n3 >> n4;
	
	media = ((n1*2) + (n2*3) + (n3*4) + n4) / 10.0;
	
	cout << "Media: " << fixed << setprecision(1) << media << endl;
	
	if(media >= 7.0) {
		cout << "Aluno aprovado." << endl;
	}
	else if(media < 5.0) {
		cout << "Aluno reprovado." << endl;
	}	
	else if(media >= 5.0 || media <= 6.9) {
		cout << "Aluno em exame." << endl;
		cin >> NotaExame;
		cout << "Nota do exame: " << NotaExame << endl;
		media2 = (NotaExame + media) / 2;
		if(media >= 5.0) {
			cout << "Aluno aprovado." << endl;
		}
		else if(media < 5.0) {
			cout << "Aluno reprovado." << endl;
		}
		cout << "Media final: " << fixed << setprecision(1) << media2 << endl;
	}
	
	return 0;
}
