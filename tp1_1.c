# include <stdio.h>

main (){
    printf("hola mundo\n");
    int x = 42;          
    int *p = &x;         

    printf("Contenido del puntero: %d\n", *p);
    printf("Direccion almacenada por el puntero: %p\n", p);
    printf("Direccion de la variable: %p\n", &x);
    printf("Direccion del puntero: %p\n", &p);
    printf("o de la variable: %zu bytes\n", sizeof(x));
}