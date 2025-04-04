#include <stdio.h>

int main(){
    

    //Declarando variaveis
    char estado_01[20], estado_02[20];
    char codigo_carta_01[20], codigo_carta_02[20];
    char cidade_01[20], cidade_02[20];
    int populacao_01, populacao_02;
    float area_01, area_02;
    float pib_01, pib_02;
    int pontos_turisticos_01, pontos_turisticos_02;


    //Entrada de dados da carta 01
    printf("DADOS DA CARTA 01:\n");
    
    printf("Digite o estado 01: \n");
    scanf("%c", &estado_01);

    printf("Digite o codigo da carta 01: \n");
    scanf("%s", &codigo_carta_01);

    printf("Digite a cidade: \n");
    scanf("%s", &cidade_01);

    printf("Digite a população 01: \n");
    scanf("%d", &populacao_01),

    printf("Digite a area 01: \n");
    scanf("%f", &area_01);

    printf("Digite o pib 01: \n");
    scanf("%f", &pib_01);

    printf("Digite a quantidade de pontos turisticos 01: \n");
    scanf("%d", &pontos_turisticos_01);

    

    //entrada de dados da carta 02
    printf("DADOS DA CARTA 02: \n");

    printf("Digite o estado 02: \n");
    scanf("%c", &estado_02);

    printf("Digite o codigo da carta 02: \n");
    scanf("%s", &codigo_carta_02);

    printf("Digite a cidade 02: \n");
    scanf("%s", &cidade_02);

    printf("Digite a população 02: \n");
    scanf("%d", &populacao_02);

    printf("Digite a area 02: \n");
    scanf("%f", &area_02);

    printf("Digite o pib 02: \n");
    scanf("%f", &pib_02);

    printf("Digite a quantidade de pontos turisticos 02: \n");
    scanf("%d", pontos_turisticos_02);



//Printf da carta 01 com quebra de linha na exibição
    printf("Estado: %c\n", estado_01);
    printf("Codigo: %s\n", codigo_carta_01);
    printf("Cidade: %s\n", cidade_01);
    printf("População: %d\n", populacao_01);
    printf("Area: %.2f\n", area_01);
    printf("Pib: %.2f\n", pib_01);
    printf("Pontos turisticos: %d\n", pontos_turisticos_01);

    
//Printf da carta 02 com quebra de linha na exibição
    printf("Estado: %c\n", estado_02);
    printf("Codigo: %s\n", codigo_carta_02);
    printf("Cidade: %s\n", cidade_02);
    printf("População: %d\n", populacao_02);
    printf("Area: %.2f\n", area_02);
    printf("Pib: %.2f\n", pib_02);
    printf("Pontos turisticos: %d\n", pontos_turisticos_02);

    return 0;







}