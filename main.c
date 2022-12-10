#include <stdio.h>
#include "Conversor.h"

int main() {

    int acao = 0;
    int valor;

    printf("Bem vindo ao amigo Conversor\n\n");
    printf("Aqui voce tem duas opcoes:\n");
    printf("1 - Converter decimal para binario\n");
    printf("2 - Converter binario para decimal\n\n");
    printf("qual opcao voce deseja?: ");
    scanf("%d", &acao);
    printf("\n");

    if (acao == 1) {
        int j;
        printf("Digite o valor que deseja converter: ");
        scanf("%d", &valor);
        printf("\n");
        ConversorDecimalBinario *conversor = conversorDecimalBinario(valor);
    } else if (acao == 2) {

        printf("Digite o valor que deseja converter: ");
        scanf("%d", &valor);
        printf("\n");
        ConversorBinarioDecimal *conversor = conversorBinarioDecimal(valor);
    } else {
        printf("Opcao invalida");
    }

    return 0;

}
