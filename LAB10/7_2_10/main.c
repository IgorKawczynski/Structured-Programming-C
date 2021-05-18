#include <stdio.h>
#include <stdlib.h>

union super_int {

    int zmienna1;
    unsigned int zmienna2;


};

int main()
{
    union super_int Superunia;
    Superunia.zmienna1=-5;


    printf("Zmienna typu int : %d | Zmienna typu unsigned int : %u \n", Superunia.zmienna1, Superunia.zmienna2);
    return 0;
}
