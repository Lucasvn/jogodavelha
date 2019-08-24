#include <iostream>
#include <string.h>
#include "functions.h"
using namespace std;

void iniciaJogadores(Jogador jogadores[2]){
    cout << "Informe o nome do primeiro jogador: " << endl;
    cin >> jogadores[0].nome;
    cout << "Informe o nome do segundo jogador: " << endl;
    cin >> jogadores[1].nome;
    jogadores[0].id=0;
    jogadores[1].id=1;
}


int turno(int t){
    if (t%2==0){
        return 0;
    }else{
        return 1;
    }
}

void jogada(char tab[3][3],int t,Jogador jogadores[2]){
    char jogador[1];
    int l, c, coord[2], aux=0;
    if(t==0){
        strcpy(jogador, "X");
    }else{
        strcpy(jogador, "O");
    }
    do{
        cout << "Vez de " << jogadores[t].nome << endl;
        cout << "Informe as coordenadas para marcar: " << endl;
        cout << "Linha: " << endl;
        cin >> l;
        cout << "Coluna: " << endl;
        cin >> c;
        if(l>=0 && l<=2 && c>=0 && c<=2){
            if(tab[l][c]!=0){
                cout << "Valor invalido, tente novamente" << endl;
            }else{
                aux = 1;                
            }
        }else{
            cout << "Valor invalido, tente novamente" << endl;
        }
    }while(aux==0);
    
    acao(tab, l, c, t);
}