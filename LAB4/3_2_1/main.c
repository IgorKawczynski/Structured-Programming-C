#include <stdio.h>
#include <stdlib.h>

int min(int *a, int *b){

if(*a<*b)return *a;

return *b; //zwracamy wskaznik, wartosc tego adresu
}



int main()
{

int x=21;
int y=236;
printf("%d", min(&x, &y));



    return 0;
}
