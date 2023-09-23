#include <stdio.h>                                                      

int main(){
    int cadastro, senha_valida, tentativa;


    printf("Cadastre uma senha:");
    scanf("%d", &cadastro);


    while(cadastro <= 999 || cadastro > 9999){
        printf("Erro: A senha cadastrada deve ser um numero entre 1000 e 9999.\nPor favor tente novamente:");
        scanf("%d", &cadastro);
    }


    senha_valida = cadastro;


    printf("Senha cadastrada: %d\n", senha_valida);
    printf("Insira novamente a senha cadastrada:");
    scanf("%d", &tentativa);


    while(tentativa != senha_valida){
        printf("Senha invalida!\nInsira novamente a senha cadastrada:");
        scanf("%d", &tentativa);
    }


    if(tentativa = senha_valida){
        printf("Senha valida!\n");
    }

    
return 0;
}