#include <iostream>

using namespace std;

int main() {
	
	int horaInicial,minutoInicial,horaFinal,minutoFinal;
   
    cin >> horaInicial;
    cin >> minutoInicial;
    cin >> horaFinal;
    cin >> minutoFinal;
       
    if((horaInicial == horaFinal) && (minutoInicial == minutoFinal)) {
        cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)" << endl;
    }
    else if(horaInicial == horaFinal) {
    	
        if(minutoInicial > minutoFinal) 
            cout << "O JOGO DUROU 23 HORA(S) E " << (60-(minutoInicial-minutoFinal)) << " MINUTO(S)" << endl;
    
        else 
            cout << "O JOGO DUROU 0 HORA(S) E " << (minutoFinal-minutoInicial) << " MINUTO(S)" << endl;
    }
    else if(horaInicial < horaFinal) {
    	
        if(minutoInicial <= minutoFinal) 
            cout << "O JOGO DUROU " << (horaFinal-horaInicial) << " HORA(S) E " << (minutoFinal-minutoInicial) << " MINUTO(S)" << endl;
    
        else 
            cout << "O JOGO DUROU " << (horaFinal-horaInicial-1) << " HORA(S) E " << (60-(minutoInicial-minutoFinal)) << " MINUTO(S)" << endl;
    }
    else if(horaInicial > horaFinal) {
            if(minutoInicial < minutoFinal) 
                cout << "O JOGO DUROU " << (24-horaInicial+horaFinal) << " HORA(S) E " << (minutoFinal-minutoInicial) << " MINUTO(S)" << endl;
            
            else 
                cout << "O JOGO DUROU " << (24-horaInicial+horaFinal-1) << " HORA(S) E " << (60-(minutoInicial-minutoFinal)) << " MINUTO(S)" << endl;
    }

	return 0;
}

