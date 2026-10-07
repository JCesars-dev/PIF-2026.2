#include <stdio.h>

int main() {

    int senhaSecreta = 2026;
    int senha;
    int tentativa;

    for (tentativa = 1; tentativa <= 3; tentativa++) {

        printf("Digite a senha: ");
        scanf("%d", &senha);

        if (senha == senhaSecreta) {
            printf("Acesso Concedido!\n");
            printf("Tentativas utilizadas: %d\n", tentativa);
            break;
        }
        else {
            printf("Senha incorreta!\n");
        }
    }

    if (senha != senhaSecreta) {
        printf("Conta Bloqueada por Seguranca!\n");
    }

    return 0;
}