#include <stdio.h>

int sum_n(int n){
   
    if (n == 1){
        return 1;
    }
    return n+sum_n(n-1);
};

int main()
{
    int n;
    printf("Ingresa n: ");
    scanf("%d", &n);

    int result = sum_n(n);
    printf("Suma primeros %d terminos: %d", n, result);
   
    return 0;

}