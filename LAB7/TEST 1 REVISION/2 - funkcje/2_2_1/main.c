#include <stdio.h>
#include <stdlib.h>

int bezwzgledna(int n){

    if(n<0)
        return (-1)*n;
    return n;

}


int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", bezwzgledna(n));

    return 0;
}
