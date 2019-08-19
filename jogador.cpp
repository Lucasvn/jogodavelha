#include <iostream>
#include <string.h>
#include "functions.h"
using namespace std;
int turno(int t){
    if (t%2==0){
        return 0;
    }else{
        return 1;
    }
}

void jogada(char tab[3][3],int t){
    char jogador[1];
    int l, c, coord[2], aux=0;
    if(t==0){
        strcpy(jogador, "X");
    }else{
        strcpy(jogador, "O");
    }
    do{
        cout << "Vez do jogador " << jogador << endl;
        cout << "Informe as coordenadas para marcar: " << endl;
        cout << "Linha: " << endl;
        cin >> l;
        cout << "Coluna: " << endl;
        cin >> c;
        if(l>=0 || l<=2 || c>=0 || c<=2){
            aux = 1;
        }else{
            cout << "Valor invalido, tente novamente" << endl;
        }
    }while(aux==0);
    
    acao(tab, l, c, t);
}