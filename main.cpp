#include <iostream>
#include "functions.h"

using namespace std;

int main(){
    int t = 0, res=0, *coord[2], jogarNovamente;
    char tab[3][3]={{0,0,0},{0,0,0},{0,0,0}};
    Jogador jogadores[2];
    iniciaJogadores(jogadores);
    do{
        tabuleiro(tab);
        t = turno(t);
        jogada(tab,t, jogadores);
        res = wincheck(tab);
        if(res==1){
            tabuleiro(tab);
            jogadores[t].vitorias++;
            cout << "Parabens, " << jogadores[t].nome << " venceu! - " << jogadores[t].vitorias << " vitorias!" << endl;
        }else if(res==2){
            cout << "Empate!" << endl;
        }
        t++;
        if (res != 0){
            cout << "Jogar novamente?" << endl;
            cout << "1 - Sim" << endl;
            cout << "0 - Nao" << endl;
            cin >> jogarNovamente;
            if (jogarNovamente == 1){
                res=0;
                zerarTab(tab);
                t=0;
            }
        }
    }while(res==0);

}