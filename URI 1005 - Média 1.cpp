#include <iostream>
 
using namespace std;
 
int main() {
 
    float A, B;
    
    cin >> A >> B;
    
    std::cout.precision(5);
    std::cout << "MEDIA = " << std::fixed << ((A*3.5)+(B*7.5))/11 << endl;
 
    return 0;
}
