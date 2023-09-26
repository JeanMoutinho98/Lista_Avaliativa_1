#include <stdio.h>

int main(){
    char nivel;
    float salario_atual;
    float salario_inicial;
    float percentual;
    float salario_novo;


    scanf("%c", &nivel);


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
    printf("R$ %.2f\n", salario_novo);

return 0;
}