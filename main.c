/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    
    
    int qtd_algo_comprado_mes;
    int opcao = 0;
    int contador = 0;
   
    
   printf("\nDigite uma opção");
   printf("\n1. Para cadastrar novo cliente.");
   printf("\n2. Para logar com conta existente.");
   printf("\n Opção: ");
   scanf("%d", &opcao);
   
    
    if (opcao == 2){
        
        printf("\n \t Compras: ");
        for(contador = 0; contador < 5;contador ++){
        
        int opcao_comprar = 0;
        printf("\nDeseja comprar algo?");
        printf("\n 1. Comprar item. ");
        printf("\n 2. Não comprar item.");
        scanf("%d", &opcao_comprar);
        if(opcao_comprar == 1){
           printf("\n Compra realizada.");
           qtd_algo_comprado_mes++;

           
           
             }
             printf("\nQTD MES: %d", qtd_algo_comprado_mes);
           
           if (qtd_algo_comprado_mes > 4){
             printf("\n \t Você tem direito a 10 pct na proxima compra");
             printf(" \n Deseja comprar mais algo? ");
             printf("\n 1. Sim");
             printf("\n 2. Encerrar compras.");
             int alternativa = 0;
             scanf("%d", &alternativa);
             
             if(alternativa == 1){
                 printf("\n Insira o valor da compra: ");
                 float valor_da_compra;
                 scanf("%f", &valor_da_compra);
                 printf("\n Valor da compra: %.3f", valor_da_compra);
                 
                 float desconto;
                 float final_valor;
                 
                 desconto = 0.10 * valor_da_compra;
                 final_valor = valor_da_compra - desconto;
                 
                 printf("\n COM desconto: %.3f ", final_valor);
                 
                 }
                 
                }
                
                }
              
            
           
        }
         
     
       
       if (opcao == 1){
           printf("\n Bem vindo usuário. Cartão de crédito de 500R$ concebido");
           printf("\n Para compras com valor acima de 500R$, 3 meses como cliente ativo.");
           
           int desejo;
           printf("\n Deseja comprar algo? ");
           scanf("%d", &desejo);
           if (desejo == 1){
               printf("Insira o valor da compra: ");
               float valor_compra_2;
               scanf("%f", &valor_compra_2);
               
               
               
               if(valor_compra_2 > 500){
                   printf("\n Valor ultrapassado do limite de 500, tente novamente");
                 
                   
               }
               else if( valor_compra_2 < 500){
                  printf("\n Compra realizada com sucesso.");
               }
               
               
           }
           
       }
    }