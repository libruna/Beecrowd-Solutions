#include <iostream>

using namespace std;
 
int main() {
	
    int n, chave;
    string palavra;
    
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        cin >> palavra >> chave;
        
        for(int i = 0; i < palavra.size(); i++) {
        	for(int k = 0; k < chave; k++) {
        		if(palavra[i] == 65) {
        			palavra[i] = 90;
				} 
				else
					palavra[i]--;
			}
        }
        cout << palavra << endl;
    }

    return 0;
}

