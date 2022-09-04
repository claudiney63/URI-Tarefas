#include <iostream>
 
using namespace std;
 
int main() {
 
    int L, C, res;
    cin >> L;
    cin >> C;
    
    res = L - C;
    
    if(res < 0) {
        res = -res;
    }
    
    if(res%2 == 0) {
        cout << 1 << "\n";
    } else {
        cout << 0 << "\n";
    }
 
    return 0;
}
