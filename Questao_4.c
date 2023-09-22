#include <stdio.h>

int main(){
    char nivel;
    float salario;
    float percentual;
    float salarionovo;


    printf("Por favor, insira o nivel do funcionario:");
    scanf("%c", &nivel);


    /*while(nivel != 'a' || nivel != 'c' || nivel != 'c'){
        printf("Erro!\nTente novamente com um nivel de funcionario valido('a', 'b' ou 'c').\n");
        printf("Por favor, insira um novo nivel de funcionario:");
        scanf("%c", &nivel);
    }*/


    printf("Por favor, insira o salario atual do funcionario em R$:");
    scanf("%.2f", &salario);


    switch(nivel){
        case 'a': 
            percentual = 0.05;
            salarionovo = salario * percentual;
            printf("Salario inicial R$ %.2f\n", salario);                                   //Por quê o salário salva como 0?
            printf("Salario apos o aumento: R$ %.2f.\n", salarionovo);                      // 0 pois multiplicou o percentual por 0.
            printf("Percentual:%.2f%.\n", percentual * 100);                                //Demonstrativo do percentual.
            break;
        case 'b': 
            percentual = 0.07;
            salarionovo = salario * percentual;
            printf("Salario apos o aumento: R$%.2f.\n", salarionovo);
            break;
        case 'c': 
            percentual = 0.08;
            salarionovo = salario * percentual;
            printf("Salario apos o aumento: R$%.2f.\n", salarionovo);
            break;
        default:
            printf("Erro!\nTente novamente com um nivel de funcionario valido('a', 'b' ou 'c').\n");
    }


return 0;
}