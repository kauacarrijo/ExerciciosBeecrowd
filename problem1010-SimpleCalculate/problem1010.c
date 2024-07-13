#include <stdio.h>

int main() {
    int codigo1, codigo2, unidades1, unidades2;
    float preco1, preco2, valorTotal;
    scanf("%d %d %f", &codigo1, &unidades1, &preco1);
    scanf("%d %d %f", &codigo2, &unidades2, &preco2);
    valorTotal = (unidades1 * preco1) + (unidades2 * preco2);
    printf("VALOR A PAGAR: R$ %.2f\n", valorTotal);
    return 0;
}