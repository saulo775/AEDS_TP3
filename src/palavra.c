#include "../headers/palavra.h"

 void palavra_criaVazia(itemPalavra *palavra){
    palavra = (itemPalavra*) malloc(sizeof (itemPalavra));

    linha_CriaListaVazia(&palavra->listaDeLinhasDaPalavra);
    //palavra_Preenche(palavra, "perereca", 2);
 }

void palavra_Preenche(itemPalavra *palavra, char* caracteres, int inputLinha){
    palavra->string = caracteres;

    linha_InsereNovoItem(&palavra->listaDeLinhasDaPalavra, inputLinha);
    //palavra_Imprime(palavra);
}


char palavra_Retorna(itemPalavra* palavra){
    return *palavra->string;
}

void palavra_Imprime(itemPalavra *palavra){
    printf("palavra=%s\n", palavra->string);
    linha_ImprimeLista(&palavra->listaDeLinhasDaPalavra);
}




//=== NÃO IMPLEMENTADO ===//
/*
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