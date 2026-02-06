#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  char e1 [50];
    char e2 [50];
    char c1 [50];
    char c2 [50];
    char cod1 [50] = "A01";
    char cod2 [50] = "B02";
    int p1;
    int p2;
    float a1;
    float a2;
    float PIB1;
    float PIB2;
    int pt1;
    int pt2;
        
        printf("Codigo da Carta: %s \n", cod1);

        printf("Digite o nome do Estado: \n");
        scanf("%s", e1);

        printf("Digite o nome da Cidade: \n");
        scanf("%s", c1);

        printf("Digite a População da Cidade: \n");
        scanf("%d", &p1);

        printf("Digite a Area em km² da Cidade: \n");
        scanf("%f", &a1);

        printf("Digite o PIB da Cidade: \n");
        scanf("%f", &PIB1);

        printf("Digite a quantidade de Pontos turisticos da Cidade: \n");
        scanf("%d", &pt1); 

        printf(" -----------------------------------\n");


    
        printf("Codigo da Carta: %s \n", cod2);

        printf("Digite o nome do Estado: \n");
        scanf("%s", e2);

        printf("Digite o nome da Cidade: \n");
        scanf("%s", c2);

        printf("Digite a População da Cidade: \n");
        scanf("%d", &p2);

        printf("Digite a Area em km² da Cidade: \n");
        scanf("%f" , &a2);

        printf("Digite o PIB da Cidade: \n");
        scanf("%f", &PIB2);

        printf("Digite a quantidade de Pontos turisticos da Cidade: \n");
        scanf("%d", &pt2);

        printf(" -----------------------------------\n\n");

        printf("Codigo: %s \n", cod1);
        printf("Estado: %s \n", e1);
        printf("Cidade: %s \n", c1);
        printf("População: %d \n", p1);
        printf("Area: %.2f km² \n", a1);
        printf("PIB: %.2f  \n", PIB1);
        printf("Pontos Turisticos: %d \n\n", pt1);
        printf("------------------------------------\n\n");
        printf("Codigo: %s \n", cod2);
        printf("Estado: %s \n", e2);
        printf("Cidade: %s \n", c2);
        printf("População: %d \n", p2);
        printf("Area: %.2f km² \n", a2);
        printf("PIB: %.2f  \n", PIB2);
        printf("Pontos Turisticos: %d \n\n", pt2);

    }

  


