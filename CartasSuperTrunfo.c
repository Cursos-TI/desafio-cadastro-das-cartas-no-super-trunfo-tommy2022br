#include <stdio.h>
    
    int main() {
        printf("Desafio Super Trunfo! \n");
         
        char nomeBahia[50];
        char nomeCodigo[4];       
        char nomeSalvador[50];
        int Populacao = 14.850;
        float Area = 693;
        float Pib = 62.9;
        int Pontosturisticos = 50;

        char Estado, SaoPaulo [10];
        char Codigo, A02 [5];       
        char Cidade, Embu [50];
        int Populacao = 250.691;
        float Area = 70.398;
        float Pib = 14.314;
        int Pontosturisticos = 35;



        printf("\nDigite o Estado (uma letra de A a H): ");
        scanf(" %c", &Estado);

        printf("\nDigite o código da carta: ");
        scanf(" %s", &Codigo);

        printf("\nDigite o nome da cidade: ");
        scanf(" %s", &Cidade);

        printf("\nDigite a população da cidade: ");
        scanf(" %d", &Populacao);

        printf("\nArea: \n");
        scanf("%f", &Area);

        printf("\nPib: \n");
        scanf("%f", &Pib);      

        printf("\nPontosturisticos: \n");
        scanf("%d", &Pontosturisticos);

        printf("Carta 1! \n");
        printf("Estado: %s \n", Estado);
        printf("Codigo da Carta: %s \n", Estado, Codigo);
        printf("Cidade: %s \n", Cidade);
        printf("Populacao: %d \n", Populacao);
        printf("Area: %f \n", Area);
        printf("Pib: %f \n", Pib);

        printf("Carta 2! \n");
        printf("Estado: %s \n", Estado);
        printf("Codigo da Carta: %s \n", Estado, Codigo);
        printf("Cidade: %s \n", Cidade);
        printf("Populacao: %d \n", Populacao);
        printf("Area: %f \n", Area);
        printf("Pib: %f \n", Pib);

  




    return 0;
}
