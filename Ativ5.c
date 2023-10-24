/*
5. Escreva uma função para o cálculo do volume de uma esfera
em que π = 3.1414592 valor do raio r deve ser passado por parâmetro.
*/
#include <stdio.h>
#include <math.h>

int volume(float r){
    float V;
    V = 4.0/3.0 * 3.1414592 * pow(r,3);
    return printf("O volume dessa esfera e: %.2f", V);
}

int main(){
    float raio;
    
    printf("Informe o raio de sua esfera:\n");
    scanf("%f", &raio);
    while(getchar() != '\n');

    volume(raio);

    return 0;
}