#include <stdio.h>

int main() {

    int senha;
    int tentativas = 0;
    int senha_correta = 2026;

    while (tentativas < 3) {

        printf("Digite a senha: ");
        scanf("%d", &senha);

        tentativas++;

        if (senha == senha_correta) {
            printf("Acesso Concedido!\n");
            return 0;
        }

        printf("Senha incorreta!\n");
    }

    printf("Conta Bloqueada por Segurança!\n");

    return 0;
}