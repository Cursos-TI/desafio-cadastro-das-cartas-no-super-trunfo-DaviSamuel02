#include <stdio.h>

int main(){

    // Variáveis da carta 1.

    char Estado[70], Codigo_carta[70],Nome_Cidade[70];
    int Populacao, Pontos_turisticos;
    float area, pib, SuperPoder;
    
    float Densidade_populacional; // Variável para armazenar a densidade populacional. (da carta 1)
    float Pib_per_capita; // Variável para armazenar o PIB per Capita. (da carta 1)

    // Variáveis da carta 2.

    char Estado2[70], Codigo_carta2[70],Nome_Cidade2[70];
    int Populacao2, Pontos_turisticos2;
    float area2, pib2, SuperPoder2;

    float Densidade_populacional2; // Variável para armazenar a densidade populacional. (da carta 2)
    float Pib_per_capita2; // Variável para armazenar o PIB per Capita. (da carta 2)


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

    printf("Digite o PIB (em reais) da cidade: \n"); // Usuário digita o PIB da cidade.
    scanf("%f", &pib);

    /*
    
    Abaixo está o cálculo de duas variáveis da carta 1 ("Densidade_populacional" e "Pib_per_capita"), utilizando uma conversão explícita para float, para gerar resultados com
    casas decimais.
    
    */
    Densidade_populacional = (float) Populacao/area;
    Pib_per_capita = (float) pib/Populacao;


    // O usuário irá digitar os dados da segunda carta.
    
    printf("\nPor favor, digite os dados da carta 2 a seguir:\n"); // Notifica ao usuário que os dados que ele irá digitar são da carta 2.
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

    printf("Digite o PIB (em reais) da cidade: \n");
    scanf("%f", &pib2);


    /*
    
    Abaixo está o cálculo de duas variáveis da carta 2 ("Densidade_populacional2" e "Pib_per_capita2"), utilizando uma conversão explícita para float, para gerar resultados com
    casas decimais.
    
    */

    Densidade_populacional2 = (float) Populacao2/area2;
    Pib_per_capita2 = (float) pib2/Populacao2;


    /* 
    
    Abaixo está o cálculo das variáveis "SuperPoder" e "SuperPoder2";
    Toda a soma das duas variáveis abaixo são convertidas automaticamente para o tipo "float", para evitar resultados imprecisos nas duas variáveis.

    */

    SuperPoder=(float) Populacao + Pontos_turisticos + area + pib + Pib_per_capita + (1/Densidade_populacional);
    SuperPoder2=(float) Populacao2 + Pontos_turisticos2 + area2 + pib2 + Pib_per_capita2 + (1/Densidade_populacional2);



    // O resultado da carta 1 será exibido após o usuário preencher o dados solicitados da carta 1.


    printf("\n-- Carta 1 --\n"); // Exibe "Carta 1" e em seguida, seus dados abaixo, separando "Carta 1" de outra carta.
    printf("Estado: %s \n", Estado);
    printf("Código da carta: %s \n", Codigo_carta);
    printf("Nome da cidade: %s \n", Nome_Cidade);
    printf("População: %d \n", Populacao);
    printf("Pontos turísticos: %d \n", Pontos_turisticos);
    printf("Área em km²: %.2f \n", area);
    printf("PIB: R$ %.2f  \n", pib);
    printf("Densidade populacional: %.2f habitantes/km² \n", Densidade_populacional);
    printf("PIB per Capita: R$ %.2f \n", Pib_per_capita);
    printf("Super Poder: %.3f\n", SuperPoder);


    // O resultado da carta 2 será exibido após o usuário preencher o dados solicitados da carta 2.

    
    printf("\n-- Carta 2 --\n"); // Exibe "Carta 2" e em seguida, seus dados abaixo, separando "Carta 2" de outra carta.
    printf("Estado: %s \n", Estado2);
    printf("Código da carta: %s \n", Codigo_carta2);
    printf("Nome da cidade: %s \n", Nome_Cidade2);
    printf("População: %d \n", Populacao2);
    printf("Pontos turísticos: %d \n", Pontos_turisticos2);
    printf("Área em km²: %.2f \n", area2);
    printf("PIB: R$ %.2f  \n", pib2);
    printf("Densidade populacional: %.2f habitantes/km² \n", Densidade_populacional2);
    printf("PIB per Capita: R$ %.2f \n", Pib_per_capita2);
    printf("Super Poder: %.3f\n", SuperPoder2);

    /*
    
    Abaixo será exibido o resultado da comparação entre as duas cartas. Valor "0" é resultado falso e "1" é verdadeiro.
    Cada "Atributo" possui uma condição a ser testada com sinais "<>".
    
    */

    printf("\n--- Comparação entre Carta 1 e Carta 2 ---\n");
    printf("\nLegenda: 0 = Perdeu         1 = Venceu\n");

    printf("\nPopulação (Carta 1): %d \n",Populacao > Populacao2);
    printf("População (Carta 2): %d \n", Populacao < Populacao2);

    printf("\nPontos turísticos (Carta 1): %d \n", Pontos_turisticos > Pontos_turisticos2);
    printf("Pontos turísticos (Carta 2): %d \n", Pontos_turisticos < Pontos_turisticos2);

    printf("\nÁrea (Carta 1): %d \n", area > area2);
    printf("Área (Carta 2): %d \n", area < area2);

    printf("\nPIB (Carta 1): %d \n", pib > pib2);
    printf("PIB (Carta 2): %d \n", pib < pib2);

    printf("\nDensidade populacional (Carta 1): %d \n", Densidade_populacional < Densidade_populacional2);
    printf("Densidade populacional (Carta 2): %d \n", Densidade_populacional > Densidade_populacional2);

    printf("\nPIB per Capita (Carta 1): %d \n", Pib_per_capita > Pib_per_capita2);
    printf("PIB per Capita (Carta 2): %d \n", Pib_per_capita < Pib_per_capita2);

    printf("\nSuper Poder (Carta 1): %d \n", SuperPoder > SuperPoder2);
    printf("Super Poder (Carta 2): %d \n", SuperPoder < SuperPoder2);

    
    
    return 0;
}