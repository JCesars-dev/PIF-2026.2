## Questão 01

**a)** `while` testa a condição antes de executar e pode executar zero vezes. `do-while` executa primeiro e testa depois, portanto executa pelo menos uma vez.

**b)** `for`: quando há contador ou número de repetições definido. `while`: quando a repetição depende de uma condição. `do-while`: quando o bloco precisa executar pelo menos uma vez.

**c)** Não é erro de compilação, e sim de lógica. O `;` cria um corpo vazio; se a condição continuar verdadeira, o laço fica infinito.

---

## Questão 02

**a)** `soma` foi declarada dentro do bloco do `for`, então não existe fora dele.

**b)** Porque `soma` recebe `0` novamente a cada repetição, impedindo o acúmulo.

**c)**
```c
int i, soma = 0;

for (i = 1; i < 10; i++) {
    soma += i * i;
}

printf("Soma final = %d\n", soma);
```
Uma variável declarada dentro de `{ }` só é visível naquele bloco e existe durante sua execução.

---

## Questão 03

**a)** `36  18  9  4  2  1`

**b)** O laço lê um caractere até ser digitado `X`. `ch + 1` representa o próximo caractere na tabela de códigos. Os parênteses garantem que primeiro `getch()` seja atribuído a `ch` e depois comparado com `'X'`.

**c)** Pode ser interrompido com `break`.

---

## Questão 04

**a)** `break` encerra imediatamente o laço em que está.

**b)** `continue` pula o restante da iteração atual. Em um `for`, depois dele é executada a expressão de incremento.

**c)** Apenas o laço interno é encerrado.

---

## Questão 05

**a)** 5 iterações.

**b)**
```text
i = 0, j = 10 | soma = 10
i = 1, j = 9  | soma = 10
i = 2, j = 8  | soma = 10
i = 3, j = 7  | soma = 10
i = 4, j = 6  | soma = 10
```

**c)**
```c
int i = 0, j = 10;

while (i < j) {
    printf("i = %d, j = %d | soma = %d\n", i, j, i + j);
    i++;
    j--;
}
```

---

## Questão 06

**a)** `x = 6`.

**b)**
```text
0 < 5 → x = 1
1 < 5 → x = 2
2 < 5 → x = 3
3 < 5 → x = 4
4 < 5 → x = 5
5 < 5 → falso, mas x passa para 6
```

**c)**
```c
int x = 0;

while (x < 5) {
    x++;
}

x++;

printf("Valor final de x = %d\n", x);
```
