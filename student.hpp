#pragma once // prevents multiple definitions

#include <iostream> // print library 

// Exercise 1: implements function 'add', that adds two numbers
int add(int a, int b);

// Exercise 2: implements function 'mul', that multiplies two numbers
int mul(int a, int b);

// ===============
// implementations
#include <stdio.h>
#include <stdlib.h>

#pragma once // prevents multiple definitions


int add(int a, int b){
    int resultado;
    resultado = a * b;
    return (resultado);
};


int mul(int a, int b){
    int resultado;
    resultado = a + b;
    return (resultado);

};

int main(){
    int num1, num2, result1, result2;
    scanf("%d", &num1);
    scanf("%d", &num2);

    result1 = mul(num1, num2);
    result2 = add(num1, num2);

    printf("\n Resultado da multiplicacao: \t %d", result1);
    printf("\n Resultado da adicao: \t %d", result2);

    return 0;

