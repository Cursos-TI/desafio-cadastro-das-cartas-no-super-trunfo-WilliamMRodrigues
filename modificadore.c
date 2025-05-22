#include <stdio.h>

int main (){
     // Declarar variaveis do Produto

     char produtoA [30] = "A";
     char produtoB [30] = "B";


    //Exibir as informações do Produto

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    float valorA = 10.50;
    float valorB =20.40;
    
    unsigned int estoqueminA = 500;
    unsigned int estoqueminB = 2500;

    double valortotalA;
    double valortotalB;

    int resultadoA, resultadoB;

    //Exibir as informações o Produto
    printf ("Produto %s, tem estoque %u, e o valor unitário é R$ %.2f\n", produtoA, estoqueA, valorA);
    printf ("Produto %s, tem estoque %u, e o valor unitário é R$ %.2f\n", produtoB, estoqueB, valorB);
   
    //Comparar com o valor mínimo de estoque
    resultadoA = estoqueA > estoqueminA;
    resultadoB = estoqueB > estoqueminB;

    printf ("O porduto %s, tem estoque mínimo %d\n", produtoA, resultadoA);
    printf ("O porduto %s, tem estoque mínimo %d\n", produtoB, resultadoB);

    //Compárações entre os valores totais dos produtos
    printf ("O valor total de A (R$ %.2f)  é maior que o valor total de B( R$ %2.f): %d\n", estoqueA * valorA, estoqueB * valorB,(estoqueA *valorA) > (estoqueB * valorB));







}