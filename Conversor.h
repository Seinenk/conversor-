//
// Created by Carlos Michael on 08/12/2022.
//

#ifndef INC_12_CONVERSOR_H
#define INC_12_CONVERSOR_H
#define MAX 100

struct ConversorDecimalBinario {
    int valor;
    int binario[MAX];
    int resultadoBinario[MAX]
};

struct ConversorBinarioDecimal {
    int valor;
    int decimal;
};

typedef struct ConversorDecimalBinario ConversorDecimalBinario;
typedef struct ConversorBinarioDecimal ConversorBinarioDecimal;

ConversorDecimalBinario *conversorDecimalBinario(int valor);
ConversorBinarioDecimal *conversorBinarioDecimal(int valor);



#endif //INC_12_CONVERSOR_H
