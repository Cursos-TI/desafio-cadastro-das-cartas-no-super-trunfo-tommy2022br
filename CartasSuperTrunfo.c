#include <stdio.h>
    
    int main() {
        printf("Desafio Super Trunfo! \n");
         
        char Estado, Bahia [10];
        char Codigo, A01 [4];       
        char Cidade, Salvador [50];
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

        printf("Digite o código da carta: ");
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

        printf("Carta 1! \n");
        printf("Estado: %s \n", Estado);
        printf("Codigo da Carta: %s \n", Estado, Codigo);
        printf("Cidade: %s \n", Cidade);
        printf("Populacao: %f \n", Populacao);
        printf("Area: %f \n", Area);
        printf("Pib: %f \n", Pib);

        printf("Carta 2! \n");
        printf("Estado: %s \n", Estado);
        printf("Codigo da Carta: %s \n", Estado, Codigo);
        printf("Cidade: %s \n", Cidade);
        printf("Populacao: %f \n", Populacao);
        printf("Area: %f \n", Area);
        printf("Pib: %f \n", Pib);

  




    return 0;
}
