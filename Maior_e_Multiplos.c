#include <stdio.h>                                          

int main(){
    int a, b;


    printf("Insira dois valores\n");
    printf("Primeiro valor:");
    scanf("%d", &a);
    printf("Segundo valor:");
    scanf("%d", &b);


    if(a == b){
        printf("Os valores lidos sao iguais.\n");
        return 0;
    }
    else if(a > b && a % b == 0 ){
        printf("%d Eh maior que %d.\n", a, b);
        printf("%d Eh multiplo de %d.\n", a, b);
    } 
    else if(a > b && a % b != 0 ){
        printf("%d Eh maior que %d.\n", a, b);
        printf("%d Nao eh multiplo de %d.\n", a, b);
    }
    else if(b > a && b % a == 0 ){
        printf("%d Eh maior que %d.\n", b, a);
        printf("%d Eh multiplo de %d.\n", b, a);
    }
    else if(b > a && b % a != 0 ){
        printf("%d Eh maior que %d.\n", b, a);
        printf("%d Nao eh multiplo de %d.\n", b, a);
    }


    return 0;
}