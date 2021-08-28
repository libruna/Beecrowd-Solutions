#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	double n, x, y;
	
	cin >> n >> x >> y;
	
	cout << fixed << setprecision(2) << n/(x+y) << endl;
	
	return 0;
}

