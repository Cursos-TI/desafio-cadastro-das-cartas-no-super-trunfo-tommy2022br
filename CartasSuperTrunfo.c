#include <stdio.h>
#include <string.h>
    
    int main() {
        printf("Desafio Super Trunfo! \n");
         
        char nomeBahia[50];
        char nomeCodigo_1[4];       
        char nomeSalvador[50];
        int Populacao_carta1;
        float Area1;
        float Pib1;
        int Pontosturisticos1 = 50;

        char nomeSaoPaulo[50];
        char nomeCodigo_2[5];       
        char nomeEmbu[50];
        int Populacao_carta2;
        float Area2;
        float Pib2;
        int Pontosturisticos2 = 35;


        printf("\nDigite o Estado (uma letra de A a H): ");
        scanf(" %s \n", nomeBahia);

        printf("\nDigite o Estado (uma letra de A a H):");
        scanf(" %s \n", nomeSaoPaulo); 

        printf("\nDigite o código da carta: ");
        scanf(" %s", nomeCodigo_1);

        printf("\nDigite o código da carta: ");
        scanf(" %s", nomeCodigo_2);

        printf("\nDigite o nome da cidade: ");
        scanf(" "), nomeSalvador, stdin);

        printf("\nDigite o nome da cidade: ");
        scanf(" "), nomeEmbu, stdin);

        printf("\nDigite a população da cidade: ");
        scanf(" %d", &Populacao_carta1);

        printf("\nDigite a população da cidade: ");
        scanf(" %d", &Populacao_carta2);

        printf("\nArea: \n");
        scanf("%f", &Area1);

        printf("\nArea: \n");
        scanf("%f", &Area2);

        printf("\nPib: \n");
        scanf("%f", &Pib1);  
        
        printf("\nPib: \n");
        scanf("%f", &Pib2); 

        printf("\nPontosturisticos: \n");
        scanf("%d", &Pontosturisticos1);

        printf("\nPontosturisticos: \n");
        scanf("%d", &Pontosturisticos2);

        printf("Carta 1! \n");
        printf("Estado: %s \n", nomeBahia);
        printf("Codigo da Carta: %s \n", nomeCodigo_1);
        printf("Cidade: %s \n", nomeSalvador);
        printf("Populacao_carta1: %d \n", Populacao_carta1);
        printf("Area: %f \n", Area1);
        printf("Pib: %f \n", Pib1);

        printf("Carta 2! \n");
        printf("Estado: %s \n", nomeSaoPaulo);
        printf("Codigo da Carta: %s \n", nomeCodigo_2);
        printf("Cidade: %s \n", nomeEmbu);
        printf("Populacao: %d \n", Populacao_carta2);
        printf("Area: %f \n", Area2);
        printf("Pib: %f \n", Pib2);

  




    return 0;
}
