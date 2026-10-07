RESPOSTAS - SIMULADO PIF - QUESTÕES 01 A 06

QUESTÃO 01 - Sensibilidade a maiúsculas e minúsculas

Resposta: C

Explicação: A linguagem C diferencia letras maiúsculas de minúsculas
(case-sensitive). Portanto, “numero”, “Numero” e “NUMERO” são
identificadores diferentes.

a)  Falsa: numero e Numero não representam o mesmo identificador.
b)  Falsa: o ponto de entrada correto é main, com m minúsculo.
c)  Verdadeira: valor/VALOR, peso/Peso e taxa/TAXA são identificadores
    distintos.
d)  Falsa: a diferenciação entre maiúsculas e minúsculas é uma
    característica da linguagem C.

QUESTÃO 02 - Especificadores de formato, sequências de escape e erros de
compilação

Código corrigido:

#include <stdio.h> #include <stdlib.h>

int main() { int idade = 20;

    printf("A idade do aluno eh: %d anos..", idade);

    return 0;

}

Três erros: 1. Não deve haver ponto e vírgula depois de #include
<stdlib.h>. 2. Main deve ser main, pois C diferencia maiúsculas de
minúsculas. 3. O texto passado para printf deve estar entre aspas.

QUESTÃO 03 - Operadores de atribuição composta e avaliação sequencial

Código:

int a = 2, b = 4, c = 5, d = 10;

a += b + c; b *= c = d - 2; d %= a + 3; a += b += c += 5;

Cálculo:

1.  a += b + c a = 2 + 4 + 5 a = 11

2.  b = c = d - 2 c = 10 - 2 c = 8 b = 4 8 b = 32

3.  d %= a + 3 d = 10 % (11 + 3) d = 10 % 14 d = 10

4.  a += b += c += 5 c = 8 + 5 = 13 b = 32 + 13 = 45 a = 11 + 45 = 56

Resposta final: a = 56 b = 45 c = 13 d = 10

QUESTÃO 04 - Avaliação de expressões lógicas

Valores: i = 2 j = 3 k = 1 x = 5 y = 5

a)  i < j + 2 2 < 5 Resultado: 1 (Verdadeiro)

b)  2 * i - 5 <= j - 4 2 * 2 - 5 <= 3 - 4 -1 <= -1 Resultado: 1
    (Verdadeiro)

c)  k && (x + y > 7.5) 1 && (10 > 7.5) 1 && 1 Resultado: 1 (Verdadeiro)

d)  (i == j) || (y / x == 2.0) (2 == 3) || (5 / 5 == 2.0) 0 || (1 ==
    2.0) 0 || 0 Resultado: 0 (Falso)

e)  i == 2 && j == 4 || k == 0 (i == 2 && j == 4) || (k == 0) (1 && 0)
    || 0 0 || 0 Resultado: 0 (Falso)

Respostas: a) 1 b) 1 c) 1 d) 0 e) 0

QUESTÃO 05 - Estruturas de repetição

a)  Diferença entre while e do-while:

while: A condição é testada antes da execução do bloco. Pode executar
zero vezes se a condição já for falsa.

do-while: O bloco é executado primeiro e a condição é testada depois.
Executa pelo menos uma vez.

Resumo: while -> mínimo de 0 execuções do-while -> mínimo de 1 execução

b)  Quando usar for:

O for é uma escolha mais elegante quando a repetição possui uma
estrutura bem definida de inicialização, condição e
incremento/decremento.

Exemplo: for (int i = 1; i <= 10; i++)

c)  while(condicao);

O ponto e vírgula após o while representa um corpo vazio. Assim, o while
pode ficar repetindo sem executar nenhuma instrução. Dependendo da
condição, isso pode causar um laço infinito. A instrução seguinte não
pertence ao while.

QUESTÃO 06 - Escopo de bloco e comandos break e continue

Código original apresenta:

int soma = 0;

dentro do bloco do for, mas tenta usar soma depois do for:

printf(“Soma final = %d”, soma);

a)  Por que ocorre erro?

Porque soma foi declarada dentro do bloco do for. Uma variável declarada
dentro de um bloco só pode ser utilizada dentro daquele bloco. Quando o
printf está fora do bloco, soma está fora de seu escopo.

b)  Iterações e efeito de continue e break:

i = 1 -> executa i = 2 -> executa i = 3 -> executa i = 4 -> executa i =
5 -> continue, pula o restante da iteração i = 6 -> executa i = 7 ->
executa i = 8 -> break, encerra o for

As iterações 9 e 10 não são executadas.

c)  Código corrigido:

#include <stdio.h>

int main() { int i; int soma = 0;

    for (i = 1; i <= 10; i++)
    {
        if (i == 5)
            continue;

        if (i == 8)
            break;

        soma += i * i;
    }

    printf("Soma final = %d\n", soma);

    return 0;

}

Cálculo: 1² + 2² + 3² + 4² + 6² + 7² = 1 + 4 + 9 + 16 + 36 + 49 = 115

Resultado: Soma final = 115