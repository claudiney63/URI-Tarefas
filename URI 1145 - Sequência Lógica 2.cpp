#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	int x, y, i, cont = 0;
	
	cin >> x >> y;
	
	for(i = 1; i <= y; i++) {
		if(cont == 0) {
			cout << i;
			cont++;
		} else if(cont != 0 && cont != x-1) {
			cout << " " << i;
			cont++;
		} else {
			cout << " " << i << endl;
			cont = 0;
		}
	}
	
	return 0;
}
