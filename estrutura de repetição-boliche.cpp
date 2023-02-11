#include <iostream>
using namespace std;

int main (){
    string cor;
    int jog1, jog2;
        for (int i=0; i<10; i++){
            cin >> cor;
            if (cor == "verde"){
                if(i%2!=0){
                    jog1++;
                } else {
                    jog2++;
                }

            }
    
        }
        if (jog1>jog2){
            cout << "jogador 1 e o ganhador";
        } else {
            cout <<"jogador 2 e o ganhador";
        }
        return 0;
}

