#include <stdio.h>                                                     

int main(){
    int cadastro, senha_valida, tentativa;


    scanf("%d", &cadastro);


    senha_valida = cadastro;


    printf("Senha cadastrada: %d\n", senha_valida);
    scanf("%d", &tentativa);


    while(tentativa != senha_valida){
        printf("Senha invalida!\n");
        scanf("%d", &tentativa);
    }


    if(tentativa = senha_valida){
        printf("Senha valida!\n");
    }

    
return 0;
}