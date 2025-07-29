#include <stdio.h>
    
    int main() {
        printf("Desafio Super Trunfo! \n");
         
        char Estado [10];
        char Codigo [4];       
        char Cidade [50];
        int Populacao = 14.850;
        float Area = 693;
        float Pib = 62.9;
        int Pontosturisticos = 50;

        printf("\nDigite o Estado (uma letra de A a H): ");
        scanf(" %c", &Estado);

        printf("Digite o código da carta, letra do estado seguida de um número de 01 a 04: ");
        scanf(" %s\n", &Codigo);

        printf("Digite o nome da cidade: ");
        scanf(" %s\n", &Cidade);

        printf("Digite a população da cidade: ");
        scanf(" %d\n", &Populacao);

        printf("Area: \n");
        scanf("%f\n", &Area);

        printf("Pib: \n");
        scanf("%f\n", &Pib);      

        printf("Pontosturisticos: \n");
        scanf("%d\n", &Pontosturisticos);


  




    return 0;
}
