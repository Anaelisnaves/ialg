#include <iostream>
using namepace std;

int main (){
    double resultado, temperatura;
    string op;

    cin >> temperatura >> op;

    if (op == 'celcius'){
        resultado = FtoC(temperatura);
        cout << resultado << o.C;
    } else ( op == 'fahrenheit'){
        resultado= CtoF(temperatura);
        cout << resultado << o.F;   
    }
    return 0;