#include <stdio.h>  
//Carlos daniel
            int main(){ 
printf("BISPO\n");
              //movimentando o bispo ultilizando a estrutura for
            for (int i = 0; i < 5; i++)
            {
              printf("BISPO >> SUPERIOR DIREITA\n");
            }

            //==============
printf("\n"); //pular linha
printf("TORRE\n");
            //movimentando a torre ultilizando do while 
            int t = 0;//variaveis para do while
            do
            {
              printf("TORRE >> DIREITA\n");
              t++;
            } while (t < 5);

            //==========
printf("\n");//pular linha 
printf("RAINHA\n") ;           
            //movimentando a rainha ultilizando while
            int r = 0;//variaveis para while
            while (r < 8)
            {
              printf("RAINHA >> ESQUERDA\n");
              r++;
            }
             

             //==========
printf("\n");//PULAR LINHA 
printf("CAVALO\n");

              int c = 0;// variavel para while aninhado 
             for (int i = 0; i < 1; i++){
              while ( c < 2)
              {
                printf("CAVALO >> BAIXO\n");
                c++;
              }
              printf("CAVALO >> ESQUERDA\n");
             }
             
            

//carlos daniel 13/07/2025
             return 0;
            }