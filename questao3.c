#include <stdio.h>

int main() {
    int valor;
    int c_100, c_50, c_20, c_10, c_5, c_2;

    printf("Digite o valor a sacar: ");
    scanf("%d", &valor);


    if (valor < 2 || valor == 3) {
        printf("Nao eh possivel pagar esse valor com as cedulas disponiveis.\n");
    } else {
        c_100 = valor / 100;
        valor = valor % 100;

        c_50 = valor / 50;
        valor = valor % 50;

        c_20 = valor / 20;
        valor = valor % 20;

        c_10 = valor / 10;
        valor = valor % 10;

        c_5 = valor / 5;
        valor = valor % 5;

        c_2 = valor / 2;
        valor = valor % 2;

    
        printf("Cedulas entregues:\n");
        if (c_100 > 0) printf("%d de 100\n", c_100);
        if (c_50 > 0)  printf("%d de 50\n", c_50);
        if (c_20 > 0)  printf("%d de 20\n", c_20);
        if (c_10 > 0)  printf("%d de 10\n", c_10);
        if (c_5 > 0)   printf("%d de 5\n", c_5);
        if (c_2 > 0)   printf("%d de 2\n", c_2);
    }

    return 0;
}