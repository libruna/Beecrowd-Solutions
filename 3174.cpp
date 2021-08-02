#include <iostream>

using namespace std;

int main() {
	
	int n, h, p = 0, b = 0, a = 0, m = 0, d = 0, i;
	string e, g;
	
	cin >> n;
	
	while(i != n) {
		cin >> e >> g;
		if(g == "bonecos") {
			cin >> h;
			b += h;
		}
		if(g == "arquitetos") {
			cin >> h;
			a += h;
		}
		if(g == "musicos") {
			cin >> h;
			m += h;
		}
		if(g == "desenhistas") {
			cin >> h;
			d += h;
		}
		i++;
	}
	p = b/8 + (a/4) + (m/6) + (d/12);
	cout << p << endl;
	return 0;
}

