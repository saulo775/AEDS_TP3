#include <string.h>
#include "palavra.h"

#define MAXTAM 1000


typedef struct {
    void *caracter;
    int posicao;
    itemPalavra vetorPalavra[MAXTAM];
}itemLetra;


typedef struct CelulaLetra* ApontadorLetra;
typedef struct CelulaLetra{
    itemLetra letter;
    struct CelulaLetra* proxLetra;
}celulaLetra;

typedef struct{
    ApontadorLetra primeiraLetra;
    ApontadorLetra ultimaLetra;
}listaDicionario;

void dicio_CriaVazio(listaDicionario *pLetra);

int dicio_LeVazio(listaDicionario* pLetra);

void dicio_VerificaLetraAlreadyExists(listaDicionario* pLetra, char inputLetra, celulaLetra *letraREF);

void dicio_InsereLetra(listaDicionario* pLetra, char caractere);

void dicio_Constroi(listaDicionario* pLetra);

void dicio_Imprime(listaDicionario* pLetra);
void dicio_ImprimeDadaLetra(listaDicionario* pLista, char dadaLetra);
void dicio_retornaPalavra(celulaLetra* letraREF, itemPalavra* refPalavra, const char* inputPalavra);
void dicio_insertPalavra(ApontadorLetra letraInsertable, itemPalavra* palavraREF);