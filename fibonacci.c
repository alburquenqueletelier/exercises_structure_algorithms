#include <stdio.h>

int fibonnachi(int n, int prev,int current){

    if (n == 0){
        return 0;
    }
   
    printf("%d-", prev);
    int aux = current;
    current = prev + current;
    prev=aux;
    return fibonnachi(n-1, prev, current);
}

/*
    n   prev    current
    5   0       1
    4   1       2
    3   2       
    ayudo a debuggear y correjir error:
    se estaba haciendo
    current = prev + current;
    prev = current;
    esto actualiza el valor de current al siguiente valor de la sucesión, pero 
    prev esta tomando ese valor siguiente, lo que ocasionaba que se sumara dos veces
    el mismo número de la sucesión en lugar de sumar los dos anteriores.

    el otro error era imprimir de a pares "%d-%d-" que ocasionaba que se repitieran valores
    de la sucesión. 
*/

int main()
{

    int n;
    printf("Ingrese valor de n: \n");
    scanf("%d", &n);
    fibonnachi(n, 0, 1);
   
    return 0;

}