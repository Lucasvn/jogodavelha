#include <iostream>
using namespace std;

void tabuleiro(char tab[3][3]){
    for(int i=0; i<3; i++){
        cout << "\t    " << tab[i][0] << " | " << tab[i][1] << " | " << tab[i][2] << endl;
        cout << "\t -------------" << endl;
    }
}