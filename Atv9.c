#include<stdio.h>

int main(){

    int codigo, votosNulos = 0, VotosemBranco = 0, opcao, candidatoRodolfo = 0, candidatoBernardo = 0, candidatoGleidson = 0, candidatoMatheus = 0;

    do{
        printf("33315 - Candidato Rodolfo.\n");
        printf("44578 - Candidato Bernardo.\n");
        printf("55412 - Candidato Gleidson.\n");
        printf("11469 - Candidato Matheus.\n");
        printf("1 - Branco\n");
        printf("2 - Nulo\n");
        printf("Insira o codigo para voto:\n");
        scanf("%d", &codigo);

        switch(codigo){
            case 33315:
            candidatoRodolfo++;
            break;
            
            case 44578:
            candidatoBernardo++;
            break;

            case 55412:
            candidatoGleidson++;
            break;

            case 11469:
            candidatoMatheus++;
            break;

            case 1:
            VotosemBranco++;
            break;

            case 2:
            votosNulos++;
            break;

            default:
            printf("Codigo Invalido.\n");

        }
        printf("Codigo registrato, Proximo.\n");
        printf("\nDeseja iniciar um novo voto? 10 - Sim, 0 - Nao\n");
        scanf("%d", &opcao);
    }while(opcao != 0);


    printf("Total de votos candidato Rodolfo: %d\n", candidatoRodolfo);
    printf("Total de votos candidato Bernardo: %d\n", candidatoBernardo);
    printf("Total de votos candidato Gleidson: %d\n", candidatoGleidson);
    printf("Total de votos candidato Matheus: %d\n", candidatoMatheus);
    printf("Total de votos nulos: %d\n", votosNulos);
    printf("Total de votos em branco3: %d\n", VotosemBranco);

}