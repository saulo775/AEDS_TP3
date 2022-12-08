#include "../headers/dicionario.h"
#include <sys/stat.h>


void dicio_CriaVazio(listaDicionario* pLetra){
    printf("criei dicionario vazio");
    pLetra->primeiraLetra = (ApontaLetra) malloc(sizeof (CelulaLetra));
    pLetra->ultimaLetra = pLetra->primeiraLetra;
    pLetra->primeiraLetra->proxLetra = NULL;

};

int dicio_LeVazio(listaDicionario* pLetra){
    if(pLetra->primeiraLetra == pLetra->ultimaLetra){
        return 0;
    }else {
        return 1;
    }
};

int dicio_VerificaLetraAlreadyExists(listaDicionario* pLetra, char letra){
    CelulaLetra* pAux;
    pAux = pLetra->primeiraLetra->proxLetra;
    if(dicio_LeVazio(pLetra) == 0) {
        return 0;
    }
    while(pAux->proxLetra != NULL){
        printf("helo");
        if(strcmp(&pAux->letter.caracter, &letra) == 0){
            return 1;
        }
        pAux = pAux->proxLetra;

    }
    free(pAux);
    return 0;
};

void dicio_InsereLetra(listaDicionario* pLetra, char caractere){
//    if (dicio_VerificaLetraAlreadyExists(pLetra, caractere) == 1){
//        return;
//    }
    pLetra->ultimaLetra->proxLetra = (ApontaLetra) malloc(sizeof(CelulaLetra));
    pLetra->ultimaLetra = pLetra->ultimaLetra->proxLetra;
    strcpy(&pLetra->ultimaLetra->letter.caracter, &caractere);
    pLetra->ultimaLetra->proxLetra = NULL;
};


void dicio_Constroi(listaDicionario* pLetra){
    const char* filename = "/Users/saulovictor/Desktop/UFV/2022-02/AEDS-1/semana_06/tp_03_v2/src/gabriel.txt";
    char *pt;
    int contLinha = 1;

    FILE *in_file = fopen(filename, "r");
    if(!in_file){
        printf("Erro na abertura do arquivo\n");
        exit(1);
    }

    printf("to aqui");
    struct stat sb;
    stat(filename, &sb);

    listaDicionario dicio;
    //itemPalavra itemPalavra;
    //TListaLinha pListaLinha;

    dicio_CriaVazio(&dicio);


    char *file_contents = malloc(sb.st_size);
    while (fscanf(in_file, "%[^\n] ", file_contents) != EOF) {
        pt = strtok(file_contents, " ");

        while(pt){
            if(dicio_VerificaLetraAlreadyExists(pLetra, pt[0]) == 0){
                itemPalavra pItemPalavra;
                strcpy(pItemPalavra.string, pt);

                dicio_InsereLetra(pLetra, pt[0]);
                printf("%s", &pLetra->primeiraLetra->proxLetra->letter.caracter);
                itemPalavra palavra;
                palavra_criaVazia(&palavra);
                palavra_Preenche(&palavra, pt, 2);


//                FLVaziaPalavras(&pListaPalavra);
//                LIserePalavras(&pListaPalavra, itemPalavra);
//                FLVaziaLinhas(&pListaLinha);
//                LIsereLinhas(&pListaLinha, contLinha);
            } //else{
//                if (VerificaPalavra(pPalavra, pt) == 1){
//                    itemPalavra = palavra_criaVazia();
//                    preenchePalavra(itemPalavra, pt);
//                    FLVaziaPalavras(pPalavra);
//                    LIserePalavras(pPalavra, itemPalavra);
//
//                    FLVaziaLinhas(pLinha);
//                    LIsereLinhas(pLinha, contLinha);
//                }else{
//                    if (VerificaLinha(pLinha, contLinha) == 1){
//                        FLVaziaLinhas(pLinha);
//                        LIsereLinhas(pLinha, contLinha);
//                    }else{
//                        break;
//                    }
//                }
//            }
            pt = strtok(NULL, " ");
        }
        contLinha++;
    }


    fclose(in_file);
    exit(EXIT_SUCCESS);
};


void dicio_Imprime(listaDicionario* pLetra);
void dicio_ImprimeDadaLetra(listaDicionario* pLista, char dadaLetra);