#include <stdio.h>
#include <math.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float a, b, c, area;
    float p;

    printf("Comprimento do lado a:\n");
    scanf("%f", &a);

    printf("Comprimento do lado b:\n");
    scanf("%f", &b);

    printf("Comprimento do lado c:\n");
    scanf("%f", &c);

    p = (a + b + c) / 2.0;
    area = sqrt(p * (p - a) * (p - b) * (p - c));

    printf("A area do triangulo é %f\n", area);

return 0;

}

