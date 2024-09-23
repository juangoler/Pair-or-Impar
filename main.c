#include <stdio.h>

int main()
{
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if (num % 2 == 0){
        printf("Esse número é par");
    } else {
        printf("Esse número é impar");
    }

    return 0;
}