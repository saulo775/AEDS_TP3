

#include "linha.h"

typedef struct{
    char* string;
    listaLinha listaDeLinhasDaPalavra;
}itemPalavra;

// [x] CRIA PALAVRA VAZIA
// [x] PREENCHE CADEIA DE CARACTERES
// [x] RETORNA CADEIA DE CARACTERS
// [x] Imprime cadeia de caracteres
// [x] Imprime Palavra (cadeia de caracteres + TAD Lista de Números de linha)

void palavra_criaVazia(itemPalavra* palavra);
void palavra_Preenche(itemPalavra* palavra, char* caracteres, int linha);
char palavra_Retorna(itemPalavra* palavra);
void palavra_Imprime(itemPalavra* palavra);
void palavra_ImprimePalavraAndLinhas(itemPalavra* palavra);


