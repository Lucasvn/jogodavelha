typedef struct Jogador{
    char nome[20];
    int vitorias=0;
    int id;
} Jogador;
void zerarTab(char[3][3]);
void iniciaJogadores(Jogador[2]);
void tabuleiro(char [3][3]);
void acao(char [3][3], int, int, int);
int turno(int);
void jogada(char [3][3], int, Jogador[2]);
int wincheck(char [3][3]);