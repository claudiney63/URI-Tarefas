#include <iostream>
 
using namespace std;
 
int main() {
 
    int v[20];
    
    for(int i = 19; i >= 0; i--) {
        cin >> v[i];
    }
    
    for(int i = 0; i <= 19; i++) {
        cout << "N[" << i << "] = " << v[i] << "\n";
    }
 
    return 0;
}
