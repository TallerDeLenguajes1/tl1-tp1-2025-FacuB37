#include <stdio.h>

int cuadrado(int x) {
    return x * x;
}


void cuadrado_void(int x) {
    printf("(funcion void)El cuadrado de %d es %d\n",x,x*x );
}


void mostrar(int *x) {
    printf("Direccion de la variable: %p\n", x);
    printf("Contenido de la variable: %d\n", *x);
}

void invertir(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void orden(int *a, int *b) {
    if (*a > *b) {
        invertir(a,b);
    }
}

int main() {
    int num1;

    printf("Ingrese un numeros: ");
    scanf("%d", &num1);


    printf("Cuadrado de %d (int): %d\n", num1, cuadrado(num1));
    cuadrado_void(num1);


    mostrar(&num1);


    int par1,par2;
    printf("Ingrese un par para ordenar: ");
    scanf("%d %d", &par1,&par2);

    orden(&par1, &par2);
    printf("Valores ordenados: %d,%d\n", par1, par2);

    return 0;
}