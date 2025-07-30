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
        int Pontosturisticos1;

        char nomeSaoPaulo[50];
        char nomeCodigo_2[5];       
        char nomeEmbu[50];
        int Populacao_carta2;
        float Area2;
        float Pib2;
        int Pontosturisticos2;


        printf("\nDigite o nome completo do Estado): ");
        scanf(" %s", nomeBahia);

        printf("\nDigite o código da carta: ");
        scanf(" %s", nomeCodigo_1);

        printf("\nDigite o nome da cidade: ");
        scanf(" %s", nomeSalvador);

        printf("\nArea: ");
        scanf("%f", &Area1);

        printf("\nPib: ");
        scanf("%f", &Pib1);  
               
        printf("\nPontosturisticos: ");
        scanf("%s", Pontosturisticos1);

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
