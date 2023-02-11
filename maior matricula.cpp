#include <iostream>
using namespace std;

int main() {
    int matricula, matricula_maior1, matricula_maior2;
    double nota, maior1 = -1, maior2 = -1;
    cin >> matricula >> nota;
    
    matricula_maior1 = matricula;
    
    while (matricula != 0) {
        if (nota > maior1) {
            maior2 = maior1;
            matricula_maior2 = matricula_maior1;
            maior1 = nota;
            matricula_maior1 = matricula;
        } else if (nota > maior2) {
            maior2 = nota;
            matricula_maior2 = matricula;
        }
        cin >> matricula >> nota;
    }
    
    cout << matricula_maior1 << " " << maior1 << endl;
    cout << matricula_maior2 << " " << maior2 << endl;
    return 0;
}