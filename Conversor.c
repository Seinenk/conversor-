//
// Created by Carlos Michael on 08/12/2022.
//

#include "Conversor.h"
#include <stdio.h>
#include <malloc.h>
#include <math.h>

ConversorDecimalBinario *conversorDecimalBinario(int valor) {
    ConversorDecimalBinario *conversor = (struct ConversorDecimalBinario *) malloc(sizeof(struct ConversorDecimalBinario));
    conversor->valor = valor;
    int i = 0;
    int j;
    while (valor > 0) {
        conversor->binario[i] = valor % 2;
        i++;
        valor = valor / 2;
    }
    printf("O valor digitado em binario eh: ");
    for (j = i - 1; j >= 0; j--) {
        printf("%d", conversor->binario[j]);
    }
    return conversor;
}

ConversorBinarioDecimal *conversorBinarioDecimal(int valor) {
    ConversorBinarioDecimal *conversor = (struct ConversorBinarioDecimal *) malloc(sizeof(struct ConversorBinarioDecimal));
    conversor->valor = valor;
    int i = 0;
    int decimal = 0;
    while (valor > 0) {
        int resto = valor % 10;
        valor = valor / 10;
        decimal = decimal + resto * pow(2, i);
        i++;
    }
    conversor->decimal = decimal;
    printf("O valor digitado em decimal eh: ");
    printf("%d", conversor->decimal);
    return conversor;
}
