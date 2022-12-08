#include "../headers/linha.h"

void linha_CriaListaVazia(listaLinha *plistaLinha){
    plistaLinha->primeiraLinha = (ApontadorCelulaLinha) malloc(sizeof (celulaLinha));
    plistaLinha->ultimaLinha = plistaLinha->primeiraLinha;
    plistaLinha->primeiraLinha->proxLinha = NULL;
};

int linha_VerificaListaEstaVazia(listaLinha* pListaLinha){
    if (pListaLinha->primeiraLinha == pListaLinha->ultimaLinha){
        return 1;
    }else {
        return 0;
    }
};

int linha_VerificaItemJaExiste(listaLinha* pListaLinha, int linha){
    celulaLinha* pAux;

    pAux = pListaLinha->primeiraLinha->proxLinha;
    while(pAux != NULL){
        if(pAux->line.numLinha == linha){
            return 0;
        }

        pAux = pAux->proxLinha;
    }
    free(pAux);
    return 1;
};

void linha_ImprimeLista(listaLinha* pListaLinha){
    ApontadorCelulaLinha pAux;
    pAux = pListaLinha->primeiraLinha->proxLinha;

    printf("Lista Linha  ");
    while (pAux != NULL){
        printf("%d ", pAux->line.numLinha);
        pAux = pAux->proxLinha;
    }
};

void linha_InsereNovoItem(listaLinha* pListaLinha, int numLinha){
    if (linha_VerificaItemJaExiste(pListaLinha, numLinha) == 0){
        return;
    }

    pListaLinha->ultimaLinha->proxLinha = (ApontadorCelulaLinha) malloc(sizeof (ApontadorCelulaLinha));
    pListaLinha->ultimaLinha = pListaLinha->ultimaLinha->proxLinha;

    pListaLinha->ultimaLinha->line.numLinha = numLinha;
    pListaLinha->ultimaLinha->proxLinha = NULL;

};


