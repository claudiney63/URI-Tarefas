#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	int o = 0;
	float x, y;
	
	cout << fixed << setprecision(2);
	
	while(o != 2) {
		do {
			cin >> x;
			if(x < 0 || x > 10) {
				cout << "nota invalida" << endl;
			}
		} while(x < 0 || x > 10);
		
		do {
			cin >> y;
			if(y < 0 || y > 10) {
				cout << "nota invalida" << endl;
			}
		} while(y < 0 || y > 10);
		
		cout << "media = " << (x+y)/2 << endl;
		do {
			cout << "novo calculo (1-sim 2-nao)" << endl;
			cin >> o;
		} while(o != 1 && o != 2);
	}
	
	return 0;
}
