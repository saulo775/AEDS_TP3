#include <stdio.h>
#include "stdlib.h"
#include "headers/palavra.h"

int main() {

    itemPalavra p;
    listaLinha LISTA;

    char* caracters = "abc";

    palavra_criaVazia(&p);
    LISTA = p.listaDeLinhasDaPalavra;

    palavra_Preenche(&p, caracters, 25);

    linha_CriaListaVazia(&LISTA);
    linha_InsereNovoItem(&LISTA, 2);
    linha_ImprimeLista(&LISTA);
    printf("palavra %s\n", p.string);

    printf("ainda dando certo");

    return 0;
}