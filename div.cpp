#include <iostream>
using namespace std;

int main() {
    int dividendo, divisor, quociente = 0;
    cin >> dividendo >> divisor;
    
    while (dividendo >= divisor) {
        dividendo -= divisor;
        quociente++;
    }
    
    cout << quociente << endl;
    return 0;
}