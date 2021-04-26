#include <stdio.h>
#include <stdlib.h>

static int stala;

int dodawanie(int n){

    stala=stala+n;
    return stala;


}

int main()
{

    printf("%d\n", dodawanie(2));
    printf("%d\n", dodawanie(2));
    printf("%d\n", dodawanie(3));
    printf("%d\n", dodawanie(2));
    return 0;
}
