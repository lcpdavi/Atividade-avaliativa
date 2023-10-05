#include <stdio.h>

int main() {
    float alturaChico = 1.5, alturaZe = 1.1;
    int ano = 0;

    while(alturaChico >= alturaZe){
        //incrementa a idade dos dois
        alturaChico += 0.02;
        alturaZe += 0.03;
        ano++;

        printf("Ze: %.2f, Chico: %.2f, %d anos\n", alturaZe, alturaChico, ano);
    }

    printf("Serao necessarios %d anos para que Ze fique mais alto que Chico!\n", ano);
    
}