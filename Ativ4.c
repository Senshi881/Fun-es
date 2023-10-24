/*
4. Escreva uma função que receba por parâmetro a altura e o raio de um cilindro circular e 
retorne o volume desse cilindro. O volume de um cilindro circular é calculado por meio da 
seguinte fórmula:
em que π = 3.1414592
*/
#include <stdio.h>
#include <math.h>

int volume(float h, float r){
    float V;
    V = 3.1414592 * pow(r,2) * h;
    return printf("O volume desse cilindro e: %.2f", V);
}

int main(){
    float altura, raio;
    
    printf("Informe a altura de seu cilindro:\n");
    scanf("%f", &altura);
    while(getchar() != '\n');
    printf("Informe o raio de seu cilindro\n");
    scanf("%f", &raio);
    while(getchar() != '\n');

    volume(altura, raio);

    return 0;
}