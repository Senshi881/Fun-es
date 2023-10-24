/*
2. Faça uma função que receba um número inteiro entre 1 a 12 e imprima em tela o mês e a 
sua quantidade de dias de acordo com o número digitado pelo usuário. Exemplo: 
Entrada = 4. Saída = abril.
*/
#include <stdio.h>

int mes(int num1){
    switch(num1){
        case 1:
        printf("\nJaneiro;");
        break;
        case 2:
        printf("\nFevereiro;");
        break;
        case 3:
        printf("\nMarco;");
        break;
        case 4:
        printf("\nAbril;");
        break;
        case 5:
        printf("\nMaio;");
        break;
        case 6:
        printf("\nJunho;");
        break;
        case 7:
        printf("\nJulho;");
        break;
        case 8:
        printf("\nAgosto;");
        break;
        case 9:
        printf("\nSetembro;");
        break;
        case 10:
        printf("\nOutubro;");
        break;
        case 11:
        printf("\nNovembro;");
        break;
        case 12:
        printf("\nDezembro;");
        break;
        default:
        printf("\nInsira um mes valido;");
        break;
    }

    return 0;
}

int main(){
    int mesI;
    printf("Digite um mes em numero: ");
    scanf("%d", &mesI);

    mes(mesI);

    return 0;
}