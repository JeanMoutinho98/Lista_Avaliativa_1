#include <stdio.h>                                                     

int main(){
    int cadastro, senha_valida, tentativa;


    scanf("%d", &cadastro);


    senha_valida = cadastro;


    printf("senha cadastrada: %d\n", senha_valida);
    scanf("%d", &tentativa);


    while(tentativa != senha_valida){
        printf("senha invalida!\n");
        scanf("%d", &tentativa);
    }


    if(tentativa = senha_valida){
        printf("senha valida!\n");
    }

    
return 0;
}