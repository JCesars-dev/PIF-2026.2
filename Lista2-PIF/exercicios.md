PARTE I — QUESTÕES TEÓRICAS E ANALÍTICAS
Questão 01 — Truncamento de Tipos e Coerção Implícita
/*
a) Qual é o valor numérico que será efetivamente exibido?

Resposta:
O valor exibido será 2.

b) Por que isso ocorre? Qual é o nome do fenômeno?

Resposta:
A variável valor_inteiro é do tipo int, mas recebe o valor 2.97,
que é um número do tipo double.

Ao realizar a atribuição para uma variável inteira, a parte decimal
é descartada, ficando somente o valor inteiro 2.

Esse comportamento é chamado de conversão implícita de tipos
(coerção implícita), com truncamento da parte decimal.

c) Como esse comportamento pode ser evitado ou controlado?

Resposta:
Se for necessário manter a precisão, deve-se utilizar uma variável
do tipo float ou double.

Caso seja necessário arredondar o valor, pode-se utilizar funções
como round(), da biblioteca <math.h>.

Exemplo:
double valor = 2.97;

Se a intenção for obter o inteiro mais próximo:
int resultado = (int)round(valor);
*/
Questão 02 — Entrada de Caracteres e Bibliotecas Legadas
/*
a) Por que <conio.h> deve ser evitada?

Resposta:
A biblioteca <conio.h> não faz parte do padrão ANSI C.
Funções como getch() e getche() são específicas de determinadas
implementações e podem não existir em sistemas modernos como Linux,
macOS e servidores.

Por isso, seu uso reduz a portabilidade do programa.

b) Quais são as funções equivalentes e portáveis?

Resposta:
A biblioteca padrão <stdio.h> fornece funções como getchar() para
ler um caractere e putchar() para exibir um caractere.

c) Exemplo de leitura robusta de um caractere:

char c;

do {
    c = getchar();
} while (c == '\n');

A variável c recebe o primeiro caractere que não seja uma quebra
de linha residual no buffer.
*/
Questão 03 — Formatação de Saída em Bases Numéricas e ASCII
/*
O programa deve ler um número inteiro e mostrar simultaneamente:

- Decimal: %d
- Hexadecimal: %x
- Octal: %o
- Caractere ASCII: %c

A implementação está na Parte II abaixo.
*/
#include <stdio.h>

int main(void) {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    printf("Decimal: %d | Hexadecimal: %x | Octal: %o | ASCII: %c\n",
           numero, numero, numero, numero);

    return 0;
}
Questão 04 — Operadores de Atribuição Composta e Precedência
/*
Valores iniciais:

a = 1
b = 2
c = 3
d = 4

1) a += b + c;

Primeiro:
b + c = 2 + 3 = 5

Depois:
a = a + 5
a = 1 + 5
a = 6

Agora:
a = 6, b = 2, c = 3, d = 4


2) b *= c = d + 2;

Primeiro:
d + 2 = 4 + 2 = 6

Então:
c = 6

Depois:
b *= c
b = b * c
b = 2 * 6
b = 12

Agora:
a = 6, b = 12, c = 6, d = 4


3) d %= a + a + a;

Primeiro:
a + a + a = 6 + 6 + 6 = 18

Então:
d = d % 18
d = 4 % 18
d = 4

Agora:
a = 6, b = 12, c = 6, d = 4


4) d -= c -= b -= a;

As atribuições compostas são avaliadas da direita para a esquerda.

Primeiro:
b -= a
b = 12 - 6
b = 6

Depois:
c -= b
c = 6 - 6
c = 0

Por fim:
d -= c
d = 4 - 0
d = 4

Agora:
a = 6, b = 6, c = 0, d = 4


5) a += b += c += 7;

Primeiro:
c += 7
c = 0 + 7
c = 7

Depois:
b += c
b = 6 + 7
b = 13

Por fim:
a += b
a = 6 + 13
a = 19

VALORES FINAIS:

a = 19
b = 13
c = 7
d = 4
*/

Correção importante: na etapa 4, d -= c -= b -= a resulta em b = 6, c = 0, d = 4. Portanto, esses são os valores usados na etapa 5.

Questão 05 — Avaliação de Expressões Lógicas e Relacionais
/*
Valores iniciais:

int i = 1;
int j = 2;
int k = 3;
int n = 2;

float x = 3.3;
float y = 4.4;


a) i < j + 3

j + 3 = 5
1 < 5 = verdadeiro

Resultado: 1


b) 2 * i - 7 <= j - 8

2 * 1 - 7 = -5
2 - 8 = -6

-5 <= -6 = falso

Resultado: 0


c) -x + y >= 2.0 * y

-3.3 + 4.4 = 1.1
2.0 * 4.4 = 8.8

1.1 >= 8.8 = falso

Resultado: 0


d) x == y

3.3 == 4.4 = falso

Resultado: 0


e) !(n - j)

n - j = 2 - 2 = 0
!0 = 1

Resultado: 1


f) !n - j

!2 = 0
0 - 2 = -2

Resultado da expressão: -2

Observação: diferente de uma comparação lógica que retornaria
somente 0 ou 1, essa expressão possui resultado numérico -2.


g) i && j && k

Em C, valores diferentes de zero são considerados verdadeiros.

1 && 2 && 3 = verdadeiro

Resultado: 1


h) i || j - 3 && k

Primeiro:
j - 3 = 2 - 3 = -1

Depois:
-1 && 3 = verdadeiro

Por fim:
1 || verdadeiro = verdadeiro

Resultado: 1


i) i < j && 2 >= k

1 < 2 = verdadeiro
2 >= 3 = falso

verdadeiro && falso = falso

Resultado: 0


j) i == 2 || j == 4 || k == 5

1 == 2 = falso
2 == 4 = falso
3 == 5 = falso

falso || falso || falso = falso

Resultado: 0
*/
Questão 06 — Comportamento e Precedência dos Incrementos
/*
Trecho A:

int n = 5;
int x = ++n;

O operador ++n é um incremento prefixado.

Primeiro n é incrementado:
n = 6

Depois o valor de n é atribuído a x:
x = 6

Resultado:
n = 6
x = 6


Trecho B:

int m = 5;
int y = m++;

O operador m++ é um incremento pós-fixado.

Primeiro o valor atual de m é utilizado:
y = 5

Depois m é incrementado:
m = 6

Resultado:
m = 6
y = 5


b) Sobre:

printf("%d\t%d\t%d\n", n, n+1, n++);

Essa instrução não deve ser utilizada dessa forma porque a variável
n é lida e modificada na mesma chamada de printf(), sem uma ordem
de avaliação garantida entre os argumentos.

O argumento n++ modifica n enquanto outros argumentos também acessam n.

Isso pode resultar em comportamento indefinido, portanto o resultado
não deve ser considerado confiável ou previsível entre compiladores.

O correto é separar as operações em instruções diferentes.
*/