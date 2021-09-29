#include <iostream>

using namespace std;

int main() {

	string str1,str2;
    getline(cin,str1);
    
	if(str1.size() == 0) return 0;
    
	while(getline(cin,str2)) {
    	
	    int maior = 0, maior2 = 0;
	    
	    for(int i = 0; i < str1.size(); i++) {
	    	
	        for(int j = 0; j < str2.size(); j++) {
	        	
	            if(str2[j] == str1[i]) {
	                maior2 = 0;
	                
	                for (int k = j, l = i; k < str2.size(), l < str1.size(); k++, l++) {
	                    if(str2[k] != str1[l])
	                        break;
	                    maior2++;
	                }
	
		            if(maior2 > maior) 
		                maior = maior2;
	       		}
	       }
	    }
	    cout << maior << endl;
	    getline(cin,str1);
	    
	    //std::cout << "Tamanho: " << str1.size() << std::endl << "primeira: " << str1[0] << std::endl;
	    if(str1.size()==0) return 0;
    }
    
    return 0;
}

