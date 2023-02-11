#include <iostream>
using namespace std;

double FtoC (double c){ 
        return ((f * 1,8 )+ 32);
}

double CtoF (double fah){
        return ((fah-32)/1,8);
}

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
}