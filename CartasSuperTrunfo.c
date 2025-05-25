#include <stdio.h>

int main(){

    // Variáveis da carta 1.

    char Estado[50], Codigo_carta[50],Nome_Cidade[50];
    int Populacao, Pontos_turisticos;
    float area, pib;

    // Variáveis da carta 2.

    char Estado2[50], Codigo_carta2[50],Nome_Cidade2[50];
    int Populacao2, Pontos_turisticos2;
    float area2, pib2;

    // O usuário irá digitar os dados da primeira carta.
    
    printf("Por favor, digite os dados da carta 1 a seguir:\n"); // Notifica ao usuário que os dados que ele irá digitar são da carta 1.
    printf("Digite o estado: \n"); // Usuário digita o nome do estado.
    scanf("%s", &Estado);

    printf("Aviso: O código do estado deve possuir a letra do estado e um número de 01 a 04 (ex: A03, B04, C01...).\n"); // O usuário deve digitar uma letra do estado e um número de 01 a 04.
    printf("Digite o código da carta: \n"); // Usuário digita o código da carta.
    scanf("%s", &Codigo_carta);

    printf("Digite o nome da cidade: \n"); // Usuário digita o nome do cidade.
    scanf("%s", &Nome_Cidade);

    printf("Digite a população: \n"); // Usuário digita a quantidade de pessoas que vivem na cidade.
    scanf("%d", &Populacao);

    printf("Digite a quantidade de pontos turísticos: \n"); // Usuário digita quantos pontos turísticos há na cidade.
    scanf("%d", &Pontos_turisticos);

    printf("Digite a área (em km²) da cidade: \n"); // Usuário digita o tamanho da cidade.
    scanf("%f", &area);

    printf("Digite o PIB (em milhões) da cidade: \n"); // Usuário digita o PIB da cidade.
    scanf("%f", &pib);

    // O usuário irá digitar os dados da segunda carta.
    
    printf("\nPor favor, digite os dados da carta 2 a seguir:\n"); // Notifica ao usuário que os dados que ele irá digitar são da carta 2.
    printf("Aviso: ");
    printf("Digite o estado: \n");
    scanf("%s", &Estado2);

    printf("Aviso: O código do estado deve possuir a letra do estado e um número de 01 a 04, (ex: A03, B04, C01...).\n");
    printf("Digite o código da carta: \n");
    scanf("%s", &Codigo_carta2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &Nome_Cidade2);

    printf("Digite a população: \n");
    scanf("%d", &Populacao2);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &Pontos_turisticos2);

    printf("Digite a área (em km²) da cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB (em milhões) da cidade: \n");
    scanf("%f", &pib2);

    printf("\n-- Carta 1 --\n"); // Exibe "Carta 1" e em seguida, seus dados abaixo, separando "Carta 1" de outra carta.
    printf("Estado: %s \n", Estado);
    printf("Código da carta: %s \n", Codigo_carta);
    printf("Nome da cidade: %s \n", Nome_Cidade);
    printf("População: %d \n", Populacao);
    printf("Número de pontos turísticos: %d \n", Pontos_turisticos);
    printf("Área em km²: %.1f \n", area);
    printf("PIB: R$ %.1f milhões \n", pib);

    
    printf("\n-- Carta 2 --\n"); // Exibe "Carta 2" e em seguida, seus dados abaixo, separando "Carta 2" de outra carta.
    printf("Estado: %s \n", Estado2);
    printf("Código da carta: %s \n", Codigo_carta2);
    printf("Nome da cidade: %s \n", Nome_Cidade2);
    printf("População: %d \n", Populacao2);
    printf("Número de pontos turísticos: %d \n", Pontos_turisticos2);
    printf("Área em km²: %.1f \n", area2);
    printf("PIB: R$ %.1f milhões \n", pib2);

    return 0;
    
}