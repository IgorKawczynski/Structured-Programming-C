#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int int_na_int1(int x){

    return x;

}

int int_na_int2(int y){

    return y;

}


bool funkcja(int(*int_na_int1)(int x), int(*int_na_int2)(int y), unsigned int n){

    for(int i=0;i<=n;i++)
    {
        if(int_na_int1(i)!=int_na_int2(i))
            return false;
    }

    return true;


}

int main()
{


    printf("%d\n", funkcja(int_na_int1, int_na_int2, 54));
    return 0;
}
