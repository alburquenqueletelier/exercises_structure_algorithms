#include <stdio.h>

int invertir(int num, int rev){
   
    if (num == 0){
        return rev;
    }

    return invertir(num/10, rev*10 + num%10);
}

/*
    invertir(1234, 0);
    #   num     rev     num/10      num%10    rev*10 + num%10   return
    1   1234    0       123         4           0 + 4 = 4       invertir(123, 4)
    2   123     4       12          3           40 + 3 = 43     invertir(12, 3)
    3   12      43      1           2           430 + 2 = 432     invertir(1, 2)
    4   1       432     0           1           4320 + 1 = 4321 invertir(0, 4321)
    5   0       4321    -           -           -               rev = 4321
*/


int main()
{
    int num;
    printf("Ingresa un entero a invertir:\n");
    scanf("%d", &num);
    int result = invertir(num, 0);
    printf("Original: %d, Invertido: %d\n", num, result);
   
    return 0;

}
	
