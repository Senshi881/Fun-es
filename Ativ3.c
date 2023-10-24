/*
3. Escreva uma função que receba por parâmetro uma temperatura em graus Fahrenheit e a 
retorne convertida em graus Celsius. A fórmula de conversão é: C = (F – 32.0) * (5.0/9.0), 
sendo F a temperatura em Fahrenheit e C a temperatura em Celsius
*/
#include <stdio.h>
#include <math.h>
#include <string.h>

int conversao(float F){
    float C;
    C = (F - 32.0) * (5.0 / 9.0);

    return printf("\nEm graus celcius fica: \nC: %.0f", C);
}

int main(){
    float F;

    printf("Informa graus em Fahreinheit para realizar a conversao:\n");
    scanf("%f", &F);
    while(getchar() != '\n');

    conversao(F);

    return 0;
}