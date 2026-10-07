#include <stdio.h>

int main() {

    int opcao;
    float salario, novoSalario, desconto;

    do {

        printf("\n--- MENU ---\n");
        printf("1 - Reajuste Salarial\n");
        printf("2 - Retencao de Imposto de Renda\n");
        printf("3 - Encerrar Programa\n");

        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {

            case 1:

                printf("Digite o salario: R$ ");
                scanf("%f", &salario);

                if (salario <= 2000.00) {
                    novoSalario = salario * 1.15;
                } else {
                    novoSalario = salario * 1.10;
                }

                printf("Novo salario: R$ %.2f\n", novoSalario);

                break;

            case 2:

                printf("Digite o salario: R$ ");
                scanf("%f", &salario);

                if (salario <= 3000.00) {
                    desconto = salario * 0.08;
                } else {
                    desconto = salario * 0.15;
                }

                printf("Desconto do Imposto de Renda: R$ %.2f\n", desconto);

                break;

            case 3:

                printf("Programa encerrado!\n");

                break;

            default:

                printf("Opcao invalida!\n");
        }

    } while (opcao != 3);

    return 0;
}