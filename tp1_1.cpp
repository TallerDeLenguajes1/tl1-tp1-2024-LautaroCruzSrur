#include <stdio.h>

int main(){
    int variable = 20;
    int *ptr = &variable;

    printf("1) El contenido del puntero: %d\n" , *ptr);

    printf("2) La direccion de memoria almacenada por el puntero: %p\n" , (void*)ptr);

    printf("3)La direccion de memoria de la variable: %p\n" , (void*)&variable);

    printf("4) La direccion de memoria del puntero: %p\n" , (void*)&ptr);

    printf("5) el tamaño de memoria utilizado por esa variable usando la función sizeof()\n" , sizeof(variable));
    
    return 0;
}