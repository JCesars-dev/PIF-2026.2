#include <stdio.h>
#include <math.h>
#include <windows.h>

/*Iniciando exercicios em C*/
int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

   double pi = 3.14159265;
   int raio;
   float volume, area;
   
   printf("Digite o valor do raio de uma esfera: ");
   scanf("%d", &raio);

   area = 4 * pi * pow(raio, 2);
   volume = (4.0 / 3.0) * pi * pow(raio, 3);

   printf("A area da esfera é %.3f\n", area);
   printf("O volume da esfera é %.3f\n", volume);

return 0;

}