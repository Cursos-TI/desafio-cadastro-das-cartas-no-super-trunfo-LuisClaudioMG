#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    char estado;//se não limitar o char com algum valor entre chaves, ele só vai receber um valor.
    int codigo_da_cidade;
    int populacao;
    double area;
    float pib;
    int pontos_turisticos;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("====Preencha a ficha da primeira carta====\n");
    
    printf("Digite uma letra para o estado de (A-H): \n");
    scanf(" %c",&estado);
    
    printf("Digite o código da cidade de (1-4) \n");
    scanf("%i",&codigo_da_cidade);
    
    printf("Digite o valor referente a população: \n");
    scanf("%i",&populacao);
    
    printf("Digite a Área: \n");
    scanf("%lf",&area);
    
    printf("Digite o PIB da cidade: \n");
    scanf(" %f",&pib);
    
    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%i",&pontos_turisticos);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\n===Exibição de dados das cartas da primeira ficha===\n");
    printf("Letra do Estado e Código : %c%i\n",estado,codigo_da_cidade);
    printf("População: %i\n",populacao);
    printf("Área: %.2f\n",area);
    printf("PIB: %.2lf\n",pib);
    printf("Pontos Turísticos: %i\n",pontos_turisticos);

    printf("\n====Preencha a ficha da segunda carta====\n");

    char estado_2;
    int codigo_da_cidade2;
    int populacao_2;
    float area_2;
    double pib_2;
    int pontos_turisticos_2;

    printf("Digite uma letra de (A-H), para nomear o estado: \n");
    scanf(" %c",&estado_2);

    printf("Digite um código para a sua cidade de (1-4): \n");
    scanf("%i",&codigo_da_cidade2);

    printf("Digite o valor que representa a população: \n");
    scanf("%i",&populacao_2);

    printf("Digite a area da cidade: \n");
    scanf("%f",&area_2);

    printf("Digite o PIB da cidade: \n");
    scanf("%lf",&pib_2);

    printf("Digite quantos pontos turísticos tem na cidade: \n");
    scanf("%i",&pontos_turisticos_2);

    printf("\n=====Exibição de dados das cartas da segunda ficha=====\n");
    
    printf("Letra do estado e código: %c%i\n",estado_2,codigo_da_cidade2);
    printf("População: %i\n",populacao_2);
    printf("Area: %f\n",area_2);
    printf("PIB: %lf\n",pib_2);
    printf("Pontos Turísticos: %i\n",pontos_turisticos_2);


    return 0;
}
