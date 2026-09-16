/*
==================================================
QUESTÃO 07
==================================================

Determine a saída dos seguintes comandos printf().

a)
printf("\n\tBom dia! Shirley.");

Saída:

    Bom dia! Shirley.


b)
printf("Você já tomou café? \n");

Saída:

Você já tomou café?


c)
printf("\n\nA solução não existe!\nNão insista.");

Saída:


A solução não existe!
Não insista.


d)
printf("Duas\tlinhas\tde\tsaída\nou\tuma?");

Saída:

Duas    linhas    de    saída
ou      uma?


e)
printf("%s\n%s\n%s\n", "um", "dois", "três");

Saída:

um
dois
três


==================================================
QUESTÃO 08
==================================================

Analise o código:

printf("\n\t\"Primeiro programa\"");

Saída:

    "Primeiro programa"

\n  -> quebra de linha
\t  -> tabulação
\"  -> imprime aspas duplas


==================================================
QUESTÃO 09
==================================================

Analise o código:

printf("%c%c%cPrimeiro programa", '\n', '\t', '\"');
printf("%c", "\"");

Na primeira instrução:

%c imprime um único caractere.

'\n' -> quebra de linha
'\t' -> tabulação
'\"' -> aspas duplas

Saída:

    "Primeiro programa

Na segunda instrução existe um erro:

printf("%c", "\"");

%c espera um caractere, mas "\""
representa uma string.

O correto seria:

printf("%c", '\"');


==================================================
QUESTÃO 10
==================================================

A linguagem C diferencia letras maiúsculas de minúsculas?

Resposta: B) Verdadeiro.

A linguagem C é case sensitive.

Exemplo:

peso
Peso
PESO

São identificadores diferentes.


==================================================
QUESTÃO 11
==================================================

Classifique as constantes:

\r       -> sequência de escape
2130     -> inteira decimal
-123     -> inteira decimal
33.28    -> ponto flutuante
0XFA     -> inteira hexadecimal
0101     -> inteira octal
2.0e30   -> ponto flutuante
\xDC     -> sequência de escape hexadecimal
'\"'     -> caractere
'\\'     -> caractere
'F'      -> caractere
0        -> inteira decimal
'\0'     -> caractere
"F"      -> string
-4567.89 -> ponto flutuante


==================================================
QUESTÃO 12
==================================================

Classifique as declarações:

int a;             -> Correta
float b;           -> Correta
double float c;    -> Incorreta
unsigned char d;   -> Correta
unsigned e;        -> Correta
long float f;      -> Incorreta
long g;            -> Correta
long double h;     -> Correta


==================================================
QUESTÃO 13
==================================================

Resposta: C.

Os arquivos de inclusão, normalmente identificados pela
extensão .h, podem conter protótipos de funções, definições
de constantes, macros e tipos.


==================================================
QUESTÃO 14
==================================================

Resposta: A.

A inclusão de um arquivo de cabeçalho, como:

#include <stdio.h>

disponibiliza as declarações necessárias para utilizar
os recursos definidos nesse cabeçalho.


==================================================
QUESTÃO 15
==================================================

Resposta: C.

A diretiva #include é uma diretiva especial do
pré-processador C e é processada antes da compilação.


==================================================
QUESTÃO 16
==================================================

Resposta: C.

As diretivas iniciadas por #, como:

#include
#define

são processadas pelo pré-processador antes da compilação.


==================================================
QUESTÃO 17
==================================================

Analise as chamadas printf():

a)

printf ( "Primeiro programa" );

Correta.


b)

printf( "Primeiro programa" );

Correta.


c)

printf("Primeiro programa");

Correta.


d)

printf "Primeiro programa" ;

Incorreta.

printf é uma função e precisa dos parênteses.

Forma correta:

printf("Primeiro programa");


==================================================
*/
