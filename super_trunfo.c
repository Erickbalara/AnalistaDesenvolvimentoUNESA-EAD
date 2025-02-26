#include <stdio.h>
 
int main() {
/* Declarar Variáveis da Carta 1: */

    char estado1[50], codigo1[50], cidade1[50];
    int populacao1, pontos_turisticos1;
    float area1, pib1;  

/* Perguntando ao Usuario os atributos da Carta 1: */

    printf("Vamos começar a inserir a Carta 1 do Super Trunfo: \n");
    printf("A Carta refere-se a qual o Estado? \n");
    scanf("%s", estado1);

    printf("Qual o Código da Carta? \n");
    scanf("%s", codigo1);

    printf("Qual a Cidade da Carta? \n");
    scanf("%s", cidade1);

    printf("Qual a população? \n");
    scanf("%d", &populacao1);

    printf("Qual a Àrea? \n");
    scanf("%f", &area1);

    printf("Qual o PIB? \n");
    scanf("%f", &pib1);

    printf("Quantos Pontos Turísticos possui? \n");
    scanf("%d", &pontos_turisticos1);


/* Declarar Variáveis da Carta 2: */

    char estado2[50], codigo2[50], cidade2[50];
    int populacao2, pontos_turisticos2;
    float area2, pib2;  

/* Perguntando ao Usuario os atributos da Carta 2: */

    printf("Agora vamos inserir a Carta 2: \n");
    printf("A Carta refere-se a qual o Estado? \n");
    scanf("%s", estado2);

    printf("Qual o Código da Carta? \n");
    scanf("%s", codigo2);

    printf("Qual a Cidade da Carta? \n");
    scanf("%s", cidade2);

    printf("Qual a população? \n");
    scanf("%d", &populacao2);

    printf("Qual a Àrea? \n");
    scanf("%f", &area2);

    printf("Qual o PIB? \n");
    scanf("%f", &pib2);

    printf("Quantos Pontos Turísticos possui? \n");
    scanf("%d", &pontos_turisticos2);


/* Printar as Cartas 1 e 2 do Super Trunfo:*/
    printf("Agora vamos as Cartas criadas: \n");
    printf("Segue as especificações da Carta 1: \n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Àrea: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Pontos Turísticos: %d\n\n\n", pontos_turisticos1);
    
    printf("Segue as especificações da Carta 2: \n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Àrea: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    return 0;
}