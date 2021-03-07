#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0;
    int b=0;
    scanf("%d\n%d", &a, &b);
    printf("NWD(%d,%d) = ", a, b);
    while(a!=b){
        if(a>b){
            a=a-b;
            }
            else if (a<b) {
                b=b-a;

            }

    }
    printf("%d", a);




    return 0;
}
