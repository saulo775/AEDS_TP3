#include <stdlib.h>
#include <stdio.h>

typedef struct {
    int numLinha;
}itemLinha;

typedef struct CelulaLinha* ApontadorCelulaLinha;
typedef struct CelulaLinha {
    itemLinha line;
    struct CelulaLinha *proxLinha;
    //ApontadorCelulaLinha *proxLinha;
}celulaLinha;

typedef struct {
    ApontadorCelulaLinha primeiraLinha;
    ApontadorCelulaLinha ultimaLinha;
}listaLinha;

void linha_CriaListaVazia(listaLinha* plistaLinha);
int linha_VerificaListaEstaVazia(listaLinha* pListaLinha);
int linha_VerificaItemJaExiste(listaLinha* pListaLinha, int pItemLinha);
void linha_ImprimeLista(listaLinha* pListaLinha);
void linha_InsereNovoItem(listaLinha* pListaLinha, int numLinha);
