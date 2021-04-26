#include <stdio.h>
#include <stdlib.h>

double int_na_double(int n){

    return n;

}

double funkcja(double(*int_na_double)(int n), int m){

    return int_na_double(m);

}


int main()
{

    printf("%lf\n", funkcja(int_na_double, 24));
    return 0;
}
