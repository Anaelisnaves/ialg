#include <iostream>
using namespace std;

double FtoC (double fahrenheit){ 
        return (fahrenheit - 32) / 1.8;
}

double CtoF (double celsius){
        return (celsius * 1.8) + 32;
}

int main (){
    double temperatura, resultado;
    string op;

    cin >> temperatura >> op;

    if (op == "F"){
        resultado = CtoF(temperatura);
        cout << resultado << endl;
    } else if ( op == "C"){
        resultado = FtoC(temperatura);
        cout << resultado << endl;
    } else {
        cout << "Opção inválida" << endl;
    }
    return 0;
}



