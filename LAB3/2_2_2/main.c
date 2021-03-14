#include <stdio.h>
#include <stdlib.h>


unsigned long long int silnia(unsigned long long int n){

if(n>=0 && n<2)return 1;
for(int i=n-1;i>0;i--){

    n=n*i;

}

return n;
}


int main()
{

printf("FACTORIAL -- this program will find a factorial of number you insert, please then type your unsigned number\n");
    unsigned long long int x;
    scanf("%llu", &x);

    /* dla liczby ca³kowitej ze znakiem w wejœciu
if(x<0) { printf("U must insert nonnegative number!\n"); }
else { printf("FACTORIAL of this number is : \n%lld\n", silnia(x)); }
*/

printf("FACTORIAL of this number is : \n%llu\n", silnia(x));

    return 0;
}
