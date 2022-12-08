#include "../headers/palavra.h"
#include "string.h"

 void palavra_criaVazia(itemPalavra* palavra){
    palavra = (itemPalavra*) malloc(sizeof (itemPalavra));

    listaLinha L;
    linha_CriaListaVazia(&L);
    palavra->listaDeLinhasDaPalavra = L;
 };

void palavra_Preenche(itemPalavra* palavra, char* caracteres, int linha){
    listaLinha LINHA;
    palavra->string = caracteres;


    LINHA = (palavra->listaDeLinhasDaPalavra);

    //linha_InsereNovoItem(&LINHA, linha);
};
/*
char palavra_Retorna(itemPalavra* palavra){
    return *palavra->string;
};

void palavra_Imprime(itemPalavra* palavra){
    printf("palavra=%s\n", palavra->string);
    linha_ImprimeLista(palavra->listaDeLinhasDaPalavra);
};


//=== NÃO IMPLEMENTADO ===//
void palavra_ImprimePalavraAndLinhas(itemPalavra* palavra){
    ApontadorCelulaLinha auxApontaLinha;
    printf("palavra: %s", palavra->string);
    printf("Aparece nas linhas: \n");

    auxApontaLinha = palavra->listaDeLinhasDaPalavra;

    while (palavra->listaDeLinhasDaPalavra != NULL){
        printf("linha: %d", auxApontaLinha->line);
        auxApontaLinha->proxLinha = auxApontaLinha->proxLinha;
    }
};

 */