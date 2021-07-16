#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("Digite dois valores inteiros!\n");
    scanf("%d %d", &a, &b);
    while(a < b){
        a++;
        printf("O valor de A e igual %d \n", a);
    }
    printf("Fim do programa");
}
