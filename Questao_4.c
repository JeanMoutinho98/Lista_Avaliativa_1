#include <stdio.h>

int main(){
    char nivel;
    float salario_atual;
    float salario_inicial;
    float percentual;
    float salario_novo;


    printf("Por favor, insira o nivel do funcionario:");
    scanf("%c", &nivel);


    while(nivel != 'a' && nivel != 'b' && nivel != 'c'){
        printf("Erro!\nTente novamente com um nivel de funcionario valido('a', 'b' ou 'c').\nPor favor, insira um novo nivel de funcionario:");
        scanf(" %c", &nivel);
    }


    printf("Por favor, insira o salario atual do funcionario em R$:");
    scanf("%f", &salario_atual);


    salario_inicial = salario_atual;


    switch(nivel){
        case 'a':
            percentual = 1.05;                                                                  
            break;
        case 'b': 
            percentual = 1.07;
            break;
        case 'c':
            percentual = 1.08;
            break;
    }

    salario_novo = salario_inicial * percentual;
    printf("Salario apos o aumento: R$ %.2f.\n", salario_novo);

return 0;
}