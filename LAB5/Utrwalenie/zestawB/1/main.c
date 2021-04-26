#include <stdio.h>
#include <stdlib.h>

void sort(int *a, int *b, int *c){

    int temp_a;
    int temp_b;
    int temp_c;
    if(*a<=*b && *c>=*b)
    {
        temp_a=*a;
        *a=*c;
        *b=*b;
        *c=temp_a;
    }

    if(*b>=*c && *a<=*b && *c>=*a)
    {
        temp_a=*a;
        *a=*a;
        *b=*c;
        *c=temp_a;
    }

    if(*a<=*b && *b>=*c && *c<=*a)
    {
        temp_a=*a;
        *a=*b;
        *b=temp_a;
        *c=*c;
    }

    if(*a>=*b && *b<=*c && *c<=*a)
    {
        temp_c=*c;
        *a=*a;
        *c=*b;
        *b=temp_c;
    }

    if(*a>=*b && *b<=*c && *c>=*a)
    {
        temp_a=*a;
        *a=*c;
        *c=*b;
        *b=temp_a;
    }

}


int main()
{
    int a,b,c;
    printf("Podaj a: ");
    scanf("%d", &a);
    printf("Podaj b: ");
    scanf("%d", &b);
    printf("Podaj c: ");
    scanf("%d", &c);
    printf("Przed zamiana a=%d, b=%d, c=%d\n", a, b, c);
    sort(&a, &b, &c);
    printf("Po zamianie a=%d, b=%d, c=%d\n", a, b, c);

    printf("Hello world!\n");
    return 0;
}
