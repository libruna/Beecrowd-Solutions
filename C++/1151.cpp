#include <iostream>

using namespace std;

int fibonacci(int n) {
	int a = 0, b = 1, c = 0;
	for(int i = 1; i < n; i++) {
        if(i%2 == 1) {
            cout << c << " ";
            c = a + b;
            a = c;
        }
        
        else if(i == 2)
    		cout << c << " ";
            
        else if(i%2 == 0) {
           	cout << c << " ";
            c = a + b;
            b = c;
        }
    }
    cout << c << endl;
	return 0;
}

int main() {
	
	int n;
	
	cin >> n;
	
	fibonacci(n);
	
	return 0;
}
