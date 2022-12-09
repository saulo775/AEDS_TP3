#include <string.h>
#include "palavra.h"

#define MAXTAM 1000

typedef struct {
    char caracter;
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
celulaLetra dicio_VerificaLetraAlreadyExists(listaDicionario* pLetra, char letra);
void dicio_InsereLetra(listaDicionario* pLetra, char caractere);
void dicio_Constroi(listaDicionario* pLetra);
void dicio_Imprime(listaDicionario* pLetra);
void dicio_ImprimeDadaLetra(listaDicionario* pLista, char dadaLetra);

void dicio_retornaPalavra(listaDicionario *pLetra, char inputLetra);