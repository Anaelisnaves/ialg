#include <iostream>
using namespace std;

int main (){
    int jog1, jog2;
    string cor;
    for (int i=0; i<10; i++){
            cin >> cor;
        if ( cor == "verde"){
            if (jog1%2!=0){
                jog1++;
            } else {
                jog2++;
            }
    }

}

        if (jog1>jog2){
        cout << "jogador 1 ganhou";
    }   else {
        cout << "jogador 2 é o ganhador";
    }
    return 0;
}