#include <stdio.h>
#include <stdlib.h>

double int_na_double(int n){

    return n;

}

double foo5(double(*int_na_double)(int n), int m){

    return int_na_double(m);

}




int main()
{
    printf("%lf\n", int_na_double(3));
    printf("%lf\n", foo5(int_na_double, 5));

    return 0;
}
