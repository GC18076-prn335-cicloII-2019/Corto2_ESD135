#include <stdio.h>

void intercambiar(int *, int *);

int main(){
    int a;
    int b;

    printf("Ingrese un valor para a: ");
    scanf(" %d", &a);

    printf("Ingrese un valor para b: ");
    scanf("%d", &b);

    printf("\n");

    printf("Valor inicial de a: %d\n", a);
    printf("Valor inicial de b: %d\n", b);

    printf("\nIntercambio\n\n");

    intercambiar(&a,&b);

    printf("Valor final de a: %d\n", a);
    printf("Valor final de b: %d\n", b);


    return 0;
}

void intercambiar(int *a, int *b){
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}