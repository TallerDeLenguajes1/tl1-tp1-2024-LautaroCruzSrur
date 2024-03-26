#include <stdio.h>

int cuadrado(int a);

void mostrarCuadrado(int a);

void invertir(int a, int b);

void ordenar (int a , int b);

int main()
{
    int a = 0 , b = 0;
    printf("Ingrese a :");
    scanf("%d", &a);
    printf("\n Ingrese b :");
    scanf("%d" ,&b);

    int resultado = cuadrado(a);
    mostrarCuadrado(a);
    printf("\nEl cuadrado de un a por funcion es : %d", resultado);

    printf("\n2La direccion de la variable es : %p y su contenido %d", (void *)&a, a);

    invertir(a,b);
    ordenar(a,b);


    return 0;
}

int cuadrado(int a)
{
    int resultado = a * a;

    return resultado;
}
void mostrarCuadrado(int a)
{
    int resultado = a * a;
    printf("\nEl cuadrado de un a por void es : %d", resultado);
}
void invertir (int a , int b){
    int aux = a;
    a = b;
    b = aux;

    printf("\nEl nuevo valor de a(invertido) es : %d , el nuevo valor de b(invertido) : %d", a , b);
}
void ordenar(int a , int b){
    int aux = 0;
    if(a > b){
        a = aux;
        b = a;
        aux = a;
        printf("\nEl nuevo valor de a es : %d , y el de b que es mas grande: %d", a ,b);
    }else if(b > a){
        printf("\nEl valor de a es : %d , y el de b que es mas grande: %d", a ,b);
    }else{
        printf("\nLos dos valores son iguales");
    }
}
