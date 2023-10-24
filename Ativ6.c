/*
6. Escreva uma função que receba o peso (quilos) e a altura (metros) de uma pessoa. Calcule 
e retorne o IMC (Índice de Massa Corporal) dessa pessoa.
*/
#include <stdio.h>
#include <math.h>

int volume(float kg, float h){
    float IMC;
    IMC = kg / (h * h);
    return printf("O IMC dessa pessoa e: %.2f", IMC);
}

int main(){
    float peso, altura;
    
    printf("Informe o peso da pessoa:\n");
    scanf("%f", &peso);
    while(getchar() != '\n');
    printf("Informe a altura dessa pessoa:\n");
    scanf("%f", &altura);
    while(getchar() != '\n');

    volume(peso, altura);

    return 0;
}