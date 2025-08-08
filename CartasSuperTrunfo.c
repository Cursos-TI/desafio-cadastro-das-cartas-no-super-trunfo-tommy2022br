#include <stdio.h>
#include <string.h>
    
    int main() {
        printf("Desafio Super Trunfo! \n");

        float media;
        char nomeBahia[50];
        char nomeCodigo_1[4];       
        char nomeSalvador[50];
        unsigned long int Populacao_carta1 = 2418;
        float Area1 = 693.442;
        float Pib1 = 62.954;
        int Pontosturisticos1 = 50;
        float DensidadePopulacional1 = 3.486;
        float PibCapita1 =  21.706;

        char nomeSaoPaulo[50];
        char nomeCodigo_2[4];       
        char nomeEmbu[50];
        double Populacao_carta2 =  307.516;
        float Area2 = 70.398;
        float Pib2 =  14.314;
        int Pontosturisticos2 = 30;
        float DensidadePopulacional2 = 3.561;
        float PibCapita2 = 51.258;


        printf("\nDigite o nome completo do Estado:");   
        scanf(" %49[^\n]", nomeBahia);

        printf("\nDigite o código da carta: ");
        scanf("%3s", nomeCodigo_1);

        printf("\nDigite o nome da cidade: ");
        scanf("%s", nomeSalvador); 

        printf("\nDigite a Populacao:");    
        scanf("%lu", &Populacao_carta1);

        printf("\nArea: ");
        scanf("%f", &Area1);

        printf("\nPib: ");
        scanf("%f", &Pib1);  

        printf("\nPontos Turisticos:" );
        scanf("%d", &Pontosturisticos1);

        printf("\nDigite o nome completo do Estado:");   
        scanf(" %49[^\n]", nomeSaoPaulo);

        printf("\nDigite o código da carta: ");
        scanf(" %3s", nomeCodigo_2);

        printf("\nDigite o nome da cidade: ");
        scanf("%s", nomeEmbu);

        printf("\nDigite a Populacao: ");
        scanf("%f", &Populacao_carta2);

        printf("\nArea: ");
        scanf("%f", &Area2);

        printf("\nPib: ");
        scanf("%f", &Pib2);  

        printf("\nPontos Turisticos: ");
        scanf("%d", &Pontosturisticos2);

        
        printf("Carta 1! \n");
        printf("Estado: %s \n", nomeBahia);
        printf("Codigo da Carta: %s \n", nomeCodigo_1);
        printf("Cidade: %49 \n", nomeSalvador);
        printf("Populacao: %d \n", Populacao_carta1);
        printf("Area: %.2f \n", Area1);
        printf("Pib: %.2f \n", Pib1);
        printf("Pontos Turisticos: %d \n", Pontosturisticos1);
       
        printf("Carta 2! \n");
        printf("Estado: %s \n", nomeSaoPaulo);
        printf("Codigo da Carta: %s \n", nomeCodigo_2);
        printf("Cidade: %49 \n", nomeEmbu);
        printf("Populacao: %.2f \n", Populacao_carta2);
        printf("Area: %.2f \n", Area2);
        printf("Pib: %.2f \n", Pib2);
        printf("Pontos Turisticos: %d \n", Pontosturisticos2);
        printf("Densidade Populacional Salvador: %.2f \n", Populacao_carta1 / Area1);
        printf("Pib per Capita Salvador: %.2f \n", Pib1 / Populacao_carta1);
        printf("Densidade Populacional Embu: %.2f \n", Populacao_carta2 / Area2);
        printf("Pib per Capita Embu: %.2f \n", Pib2 / Populacao_carta2);
        
         media = (float) (Populacao_carta1 + Area1) / 2;
         (Pib1 + DensidadePopulacional1) / 2; (Populacao_carta2 + Area2) / 2;
         (Pib2 + DensidadePopulacional2) / 2;

    return 0;
}
