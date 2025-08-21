#include <stdio.h>
int main(){
    // Variáveis para cada atributo da cidade
    // Atributos da primeira carta
    char estado1;
    char codigodacidade1[10];
    char nomedacidade1[20]; 
    unsigned long int populacao1;
    float area1;
    float pib1;
    int numerodepontosturisticos1;
    float densidadepopulacional1;
    float pibpercapita1;
    float superpoder1;

    // Atributos da segunda carta
    char estado2;
    char codigodacidade2[10];
    char nomedacidade2[20];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int numerodepontosturisticos2;
    float densidadepopulacional2;
    float pibpercapita2;
    float superpoder2;

    // Variáveis para calcular as comparações
    int resultadopopulacao, resultadoarea, resultadopib, resultadopontosturisticos, resultadodensidade, resultadopibpercapita, resultadosuperpoder;

    //Cadastro da primeira carta:
    printf("Digite o Estado: \n");
    scanf("%c", &estado1);

    printf("Digite o código da cidade: \n");
    scanf("%s", &codigodacidade1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomedacidade1);

    printf("Digita a população: \n");
    scanf("%lu", &populacao1);

    printf("Digita a área: \n");
    scanf("%f", &area1);

    printf("Digite o pib: \n");
    scanf("%f", &pib1);

    printf("Digito o número de pontos turísticos: \n");
    scanf("%d", &numerodepontosturisticos1);

    //Calculo da densidade populacional e PIB per capita da primeira carta
    densidadepopulacional1 = (float)populacao1 / area1;
    pibpercapita1 = pib1 *1e9 / (float)populacao1;

    // Super poder da primeira carta
    superpoder1 = (float)populacao1 + area1 + pib1 + numerodepontosturisticos1 + pibpercapita1 + (1 / densidadepopulacional1);

    //Cadastro da segunda carta:
    printf("\nDigite o Estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o código da cidade: \n");
    scanf("%s", &codigodacidade2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomedacidade2);

    printf("Digita a população: \n");
    scanf("%lu", &populacao2);

    printf("Digita a área: \n");
    scanf("%f", &area2);

    printf("Digite o pib: \n");
    scanf("%f", &pib2);

    printf("Digito o número de pontos turísticos: \n");
    scanf("%d", &numerodepontosturisticos2);

    //Calculo da densidade populacional e PIB per capita da segundo carta
    densidadepopulacional2 = (float)populacao2 / area2;
    pibpercapita2 = pib2 *1e9 / (float)populacao2;

    // Super poder da segunda carta
    superpoder2 = (float)populacao2 + area2 + pib2 + numerodepontosturisticos2 + pibpercapita2 + (1 / densidadepopulacional2);

    //Exibindo os dados da primeira carta:
    printf("\n     Carta 1     \n");
    printf("Estado: %c \n", estado1);
    printf("Código da cidade: %c %s \n",estado1, codigodacidade1);
    printf("Nome da cidade: %s \n", nomedacidade1);
    printf("População: %lu \n", populacao1);
    printf("Área: %.2f KM²\n", area1);
    printf("PIB: %.2f Bilhões de reais\n", pib1);
    printf("Número de pontos Turísticos: %d \n", numerodepontosturisticos1);
    printf("Densidade populacional: %.2f Hab/km²\n", densidadepopulacional1);
    printf("PIB per capita: %.2f reais\n",pibpercapita1);
    printf("Super poder: %.2f\n", superpoder1);
    printf("\n");

    //Exibindo os dados da segunda carta:
    printf("\n     Carta 2     \n");
    printf("Estado: %c \n", estado2);
    printf("Código da cidade: %c %s \n",estado2, codigodacidade2);
    printf("Nome da cidade: %s \n", nomedacidade2);
    printf("População: %lu \n", populacao2);
    printf("Área: %.2f KM²\n", area2);
    printf("PIB: %.2f Bilhões de reais\n", pib2);
    printf("Número de pontos Turísticos: %d \n", numerodepontosturisticos2);
    printf("Densidade populacional: %.2f Hab/km²\n", densidadepopulacional2);
    printf("PIB per capita: %.2f reais\n",pibpercapita2);
    printf("Super poder: %.2f\n", superpoder2);

    // Comparações entre as cartas
    resultadopopulacao = populacao1 > populacao2;
    resultadoarea = area1 > area2;
    resultadopib = pib1 > pib2;
    resultadopontosturisticos = numerodepontosturisticos1 > numerodepontosturisticos2;
    resultadodensidade = densidadepopulacional1 < densidadepopulacional2; // menor densidade vence
    resultadopibpercapita = pibpercapita1 > pibpercapita2;
    resultadosuperpoder = superpoder1 > superpoder2;

    // Exibição dos resultados das comparações
    printf("\n     Comparações entre as cartas     \n");
    printf("População: Carta %d venceu (%d)\n", (populacao1 > populacao2 ? 1:2), resultadoarea);
    printf("Área: Carta %d venceu (%d)\n", (area1 > area2 ? 1:2), resultadoarea);
    printf("PIB: Carta %d venceu (%d)\n", (pib1 > pib2 ? 1:2), resultadopib);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (numerodepontosturisticos1 > numerodepontosturisticos2 ? 1:2), resultadopontosturisticos);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidadepopulacional1 < densidadepopulacional2 ? 1:2), resultadodensidade);
    printf("PIB per Capita: Carta %d venceu  (%d)\n", (pibpercapita1 > pibpercapita2 ? 1:2), resultadopibpercapita);
    printf("Super Poder: Carta %d venceu (%d)\n", (superpoder1 > superpoder2 ? 1:2), resultadosuperpoder);
    
    return 0;
}