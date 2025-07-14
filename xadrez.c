#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
#include <stdio.h>

int main(){
    //variaveis
    int torre,bispo=1;
    int rainha=1;
               
    //movientaçao da torre usando FOR
            printf("MOVIMENTAÇAO DA TORRE 5 CASAS PARA DIREITA\n");
               for ( torre = 0; torre < 5; torre++)
               {
                printf("TORRE << DIREITA\n", torre);
               }

    //MOVIMENTAÇAO DO BISPO USANDO WHILE
            printf("\nMOVIENTAÇAO DO BISPO 5 CASAS NA DIAGONAL CASAS,DIREITA\n");           
               while (bispo<=5)
               {
                printf("BISPO << CIMA,DIREITA\n", bispo);
                bispo++;
               }
    //MOVIMENTAÇAO DA RAINHA USANDO DO WHILE
            printf("\nMOVIENTAÇAO DA RAINHA 8 CASAS PARA ESQUERDA\n");           
               do
               {
                printf("RAINHA << ESQUERDA\n");
                rainha++;
               } while (rainha<=8);
               
               // DESENVOLVIDO NO VS CODE DESKTOP!
               //28 de junho 2025
               //CARLOS DANIEL 
             return 0;  

         }

