#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int x, y;

    printf("Digite um ponto no plano cartesiano (X,Y) entre -50 e 50:\n");
    scanf("%d %d", &x, &y);

    if (x >= -50 && x <= 50 && y >= -50 && y <= 50) {
        printf("Ponto válido.\n");
        if (x == 0 && y == 0) {
            printf("O ponto está na origem.\n");
        }
        if (x == 0) {
            printf("O ponto está no eixo Y.\n");
        }
        if (y == 0) {
            printf("O ponto está no eixo X.\n");
        }
        if (x > 0 && y > 0) {
            printf("O ponto está no primeiro quadrante.\n");
        }
        if (x < 0 && y > 0) {
            printf("O ponto está no segundo quadrante.\n");
        }
        if (x < 0 && y < 0) {
            printf("O ponto está no terceiro quadrante.\n");
        }
        if (x > 0 && y < 0) {
            printf("O ponto está no quarto quadrante.\n");
        }
    } else {
        printf("Ponto inválido. O ponto deve estar entre -50 e 50.\n");
    }

    return 0;
}
