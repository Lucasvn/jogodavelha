#include <iostream>
#include "functions.h"

using namespace std;

int main(){
    int t = 0, res=0, *coord[2];
    char tab[3][3]={{0,0,0},{0,0,0},{0,0,0}};
    do{
        tabuleiro(tab);
        t = turno(t);
        jogada(tab,t);
        res = wincheck(tab);
        if(res==1){
            tabuleiro(tab);
            if(t==0){
                cout << "Parabens, vitoria do jogador X" << endl;
            }else{
                cout << "Parabens, vitoria do jogador O" << endl;
            }
        }else if(res==2){
            cout << "Empate!" << endl;
        }
        t++;
    }while(res==0);

}