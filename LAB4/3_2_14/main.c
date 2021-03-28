#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int int_na_int(int n){

    return n;

}

int int_na_int2(int n2){

    return n2;

}


bool foo5(int(*int_na_int)(int jeden), int(*int_na_int2)(int dwa), unsigned int n){

    for(int i=0;i<=n;i++){

        if (int_na_int(i) != int_na_int2(i))return false;

    }
    return true;
}


int main()
{
    printf("%d\n", foo5(int_na_int, int_na_int2, 4));
    return 0;
}
