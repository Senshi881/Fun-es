#include <stdio.h>
//definição e implementação de função

int maior(int num1, int num2){
    if(num1 > num2){
        return num1;
    }else{
        return num2;
    }
}

int main(){
    int n1, n2;
    printf("Digite os valores de entrada: ");
    scanf("%d %d", &n1, &n2);

    int resultado = maior(n1,n2);

    printf("Resultado da funcao: %d", resultado);

    return 0;
}