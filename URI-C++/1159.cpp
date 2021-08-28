#include <iostream>

using namespace std;

int main() {
	
	int soma = 0, num;
	
	while(true) {
		
		cin >> num;
        
       	if(num == 0)
		   break;
                
        soma = 0;
                
    	if(num%2 == 0)
			soma += num;
        else 
			soma += ++num;
                
        for(int i = 0; i < 4; i++){
            num += 2;
            soma += num;
        }
        cout << soma << endl;
        
    }
    return 0;
}
