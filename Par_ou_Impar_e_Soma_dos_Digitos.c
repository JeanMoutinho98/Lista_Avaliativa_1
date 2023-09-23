#include <stdio.h>

int main(){
    int numero, n, soma = 0, digito;
    

    printf("Insira um numero:"); 
    scanf("%d", &numero);


    n = numero;                                             // Se não fizer n = número, dará problema na hora de utilizar novamente a variável 'numero'.


    if(numero % 2 == 0){
        printf("%d eh par.\n", numero);
    }
    else{
        printf("%d eh impar.\n", numero);
    }


    while(n != 0){
        digito = n % 10;
        soma = soma + digito;
        n = n / 10;
    }
    

    printf("A soma dos algarismos de %d eh igual a %d\n", numero, soma); 


return 0;
}