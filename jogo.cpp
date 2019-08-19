void acao(char tab[3][3], int l, int c, int turno){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if (l == i && c==j){
                if(turno==0){
                    tab[i][j] = 'X';
                }else{
                    tab[i][j] = 'O';
                }
            }
        }
    }
}

int wincheck(char tab[3][3]){
    int aux=0;
    for(int i=0; i<3; i++){
        if(tab[i][0]==tab[i][1] && tab[i][0]==tab[i][2] && tab[i][0]!=0){
            return 1;
        }else if(tab[0][i]==tab[1][i] && tab[0][i]==tab[2][i] && tab[0][i]!=0){
            return 1;
        }
    }
    if(tab[0][0]==tab[1][1] && tab[0][0]==tab[2][2] && tab[0][0]!=0){
        return 1;
    }else if(tab[0][2]==tab[1][1] && tab[1][1]==tab[2][0] && tab[1][1]!=0){
        return 1;
    }else{
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                if(tab[i][j]==0){
                    return 0;
                }else{
                    aux++;
                }
            }
        }
        if(aux==9){
            return 2;
        } 
    }
}