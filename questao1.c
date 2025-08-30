#include <stdio.h>

int main() {
    float a, b, c;

    printf("Digite os tres lados do triangulo\n");
    scanf("%f %f %f", &a, &b, &c);

    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("Forma um triangulo valido.\n");

        if (a == b && b == c) {
            printf("Tipo: Equilatero\n");
        } else if (a == b || a == c || b == c) {
            printf("Tipo: Isosceles\n");
        } else {
            printf("Tipo: Escaleno\n");
        }

    } else {
        printf("Nao forma um triangulo valido.\n");
    }

    return 0;
}