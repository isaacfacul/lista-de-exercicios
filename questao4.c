#include <stdio.h>
#include <stdlib.h>  
#include <time.h>    

int main() {
    int nSecreto, palpite;

    srand(time(NULL)); 
    nSecreto = rand() % 100 + 1; 

    printf("Tente adivinhar o numero secreto entre 1 e 100!\n");

    do {
        printf("Digite seu palpite: ");
        scanf("%d", &palpite);

        if (palpite == nSecreto) {
            printf("Parabens, voce acertou!\n");
        } else if (palpite > nSecreto) {
            printf("Muito alto, tente um numero menor!\n");
        } else {
            printf("Muito baixo, tente um numero maior!\n");
        }

    } while (palpite != nSecreto);

    return 0;
}