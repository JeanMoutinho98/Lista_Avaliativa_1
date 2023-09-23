#include <stdio.h>
int main(){
    int ano;


     printf("Insira um ano:");
     scanf("%d", &ano);
    
    
    if(ano == 1916 || ano == 1940 || ano == 1944 || ano == 1942 || ano == 1946){
        printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d.", ano);                       //Obs: Acentos removidos para facilitar a leitura do código.
    }
    else if(ano % 4 == 0 && ano >= 1896){
        printf("Os Jogos Olimpicos de Verao ocorreram no ano de %d.\n", ano);                                   //Obs: Acentos removidos para facilitar a leitura do código.
    }
    else if(ano % 2 == 0 && ano >= 1930){
        printf("A Copa do Mundo de Futebol ocorreu no ano de %d.\n", ano);
    }
    else{
          printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d.\n", ano);                   //Obs: Acentos removidos para facilitar a leitura do código.
    }


return 0;
}