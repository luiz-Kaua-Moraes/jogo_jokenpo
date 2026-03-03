#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Funções
void mostrar_regra()
{
    printf("Regras\n\n");
    printf("Você deve escolher uma opção e o computador outra\n");
    printf("Pedra vence tesoura\n");
    printf("Tesoura vence papel\n");
    printf("Papel vence pedra\n");
}

void mostrar_opcoesJogo()
{
    // jogador deve ver as opções
    printf("\nEscolha oque deseja jogar\n\n");
    printf("1- Pedra\n");
    printf("2- Papel\n");
    printf("3- Tesoura\n\n");
}

int main()
{

    int opcao_jogo;
    int opcao_menu;

    int esolha_computador; // escolha aleatória

    // menu
    printf("\n\nOlá! Bem vindo ao jokenpô\n\n");
    printf("Para comerçamos, por favor, informe oque deseja fazer\n\n");
    printf("1- Jogar\n");
    printf("2- Mostrar regras\n");
    printf("3 - Sair\n\n");

    printf("Eu quero: ");
    scanf(" %d", &opcao_menu);

    // computador escolhe númeo aleatório
    srand(time(0));
    esolha_computador = rand() % 3 + 1;

    // Realizar as escolhas do menu 1- jogar, 2- mostrar regras 3- sair
    switch (opcao_menu)
    {
    case 1:
        mostrar_opcoesJogo();
        printf("Eu Jogo: ");
        scanf(" %d", &opcao_jogo);

        // mostrar a esolha do jogdor 1-pedra , 2-papel , 3-tesoura
        switch (opcao_jogo)
        {
        case 1:

            printf("Sua escolha: Pedra\n");

            break;

        case 2:
            printf("Sua escolha: Papel\n");

            break;

        case 3:
            printf("Sua escolha: Tesoura\n");

            break;

        default:
            printf("Opção inválida!");
        }

        // mostrar a esolha do computador 1-pedra , 2-papel , 3-tesoura
        switch (esolha_computador)
        {
        case 1:
            printf("Escolha computador: Pedra\n");

            break;

        case 2:
            printf("Escolha computador: Papel\n");

            break;

        case 3:
            printf("Escolha computador: Tesoura\n");

            break;

        default:
            printf("Opção inválida!");
        }

        break;
    case 2:
        mostrar_regra();
        return 0;

        break;
    case 3:
        return 0;
    default:
        printf("Opção inválida!");
    }

    if (opcao_jogo == 1 && esolha_computador == 3)
    {
        printf("Jogador venceu");
    }
    else if (opcao_jogo == 2 && esolha_computador == 1)
    {
        printf("Jogador venceu");
    }
    else if (opcao_jogo == 3 && esolha_computador == 2)
    {
        printf("Jogador venceu");
    }
    // opções iguai = empate
    else if (opcao_jogo == esolha_computador)

    {
        printf("Emapate");
    }
    // compuatdor vence
    else
    {
        printf("Computador vence!");
    }
}
