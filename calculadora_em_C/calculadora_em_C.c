
#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main() {
    float num, num_2, soma, sub, mult, div;
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    
    printf("Insira o primeiro número: ");
    scanf("%f", &num);
    
    printf("Insira o segundo número: ");
    scanf("%f", &num_2);
    
    soma = num + num_2;
    sub = num - num_2;
    mult = num * num_2;
    div = num / num_2;
    
    printf("O resultado da soma : %.2f\n", soma);
    printf("O resultado da subtração : %.2f\n", sub);
    printf("O resultado da multiplicação : %.2f\n", mult);
    printf("O resultado da divisão : %.2f\n", div);

    SetConsoleOutputCP(CPAGE_DEFAULT);
    
    return 0;
}
