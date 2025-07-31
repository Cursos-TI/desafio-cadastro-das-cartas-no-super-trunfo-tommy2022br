#include <stdio.h>
#include <string.h>
    
    int main() {
        printf("Desafio Super Trunfo! \n");
         
        char nomeBahia[50];
        char nomeCodigo_1[4];       
        char nomeSalvador[50];
        int Populacao_carta1 = 2418;
        float Area1 = 693.442;
        float Pib1 = 62.954;
        int Pontosturisticos1 = 50;

        char nomeSaoPaulo[50];
        char nomeCodigo_2[5];       
        char nomeEmbu[50];
        int Populacao_carta2 =  307.516;
        float Area2 = 70.398;
        float Pib2 =  14.314;
        int Pontosturisticos2 = 30;


        printf("\nDigite o nome completo do Estado: ");
        scanf(" %s", nomeBahia);

        printf("\nDigite o código da carta: ");
        scanf(" %s", nomeCodigo_1);

        printf("\nDigite o nome da cidade: ");
        scanf(" %s", nomeSalvador);

        printf("\nDigite a Populacao");
        scanf(" %d", &Populacao_carta1);

        printf("\nArea: ");
        scanf("%f", &Area1);

        printf("\nPib: ");
        scanf("%f", &Pib1);  

        printf("\nPontos Turisticos:" );
        scanf(" %d", &Pontosturisticos1);

        printf("\nDigite o nome completo do Estado): ");
        scanf(" %s", nomeSaoPaulo);

        printf("\nDigite o código da carta: ");
        scanf(" %s", nomeCodigo_2);

        printf("\nDigite o nome da cidade: ");
        scanf(" %s", nomeEmbu);

        printf("\nDigite a Populacao");
        scanf(" %d", &Populacao_carta2);

        printf("\nArea: ");
        scanf("%f", &Area2);

        printf("\nPib: ");
        scanf("%f", &Pib2);  

        printf("\nPontos Turisticos:" );
        scanf(" %d", &Pontosturisticos2);

                
                        

        printf("Carta 1! \n");
        printf("Estado: %s \n", nomeBahia);
        printf("Codigo da Carta: %s \n", nomeCodigo_1);
        printf("Cidade: %s \n", nomeSalvador);
        printf("Populacao_carta1: %d \n", Populacao_carta1);
        printf("Area: %.2f \n", Area1);
        printf("Pib: %.2f \n", Pib1);
        printf("Pontos Turisticos: %d \n", Pontosturisticos1);

        printf("Carta 2! \n");
        printf("Estado: %s \n", nomeSaoPaulo);
        printf("Codigo da Carta: %s \n", nomeCodigo_2);
        printf("Cidade: %s \n", nomeEmbu);
        printf("Populacao: %d \n", Populacao_carta2);
        printf("Area: %.2f \n", Area2);
        printf("Pib: %.2f \n", Pib2);
        printf("Pontos Turisticos: %d \n", Pontosturisticos2);
        


    return 0;
}
