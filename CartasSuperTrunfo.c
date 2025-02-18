#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char nome_da_cidade[50];
    char codigo_da_cidade;
    int populacao;
    double area;
    float pib;
    int pontos_turisticos;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Digite o Nome da Cidade: \n",nome_da_cidade);
    scanf("%s",nome_da_cidade);
    
    printf("Digite o código da cidade, deve ter apenas uma letra de A a H: \n", codigo_da_cidade);
    scanf(" %c",&codigo_da_cidade);
    
    printf("Digite o valor referente a população: \n",populacao);
    scanf("%i",&populacao);
    
    printf("Digite a Área: \n",area);
    scanf("%lf",&area);
    
    printf("Digite o PIB da cidade: \n",pib);
    scanf("%f",&pib);
    
    printf("Digite a quantidade de pontos turísticos: \n",pontos_turisticos);
    scanf("%i",&pontos_turisticos);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\n===Exibição de dados das cartas===\n");
    printf("Nome da Cidade: %s\n",nome_da_cidade);
    printf("Código da cidade: %c\n",codigo_da_cidade);
    printf("População: %i\n",populacao);
    printf("Área: %.2f\n",area);
    printf("PIB: %.2lf\n",pib);
    printf("Pontos Turísticos: %i\n",pontos_turisticos);




    return 0;
}
