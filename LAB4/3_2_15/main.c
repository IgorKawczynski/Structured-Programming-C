#include <stdio.h>
#include <stdlib.h>

void przepis(const int *n, int *m){

    *m=*n;

}

int main()
{
    int n;
    int m;
    scanf("%d\n%d", &n, &m);
    printf("%d, %d ---- PRZED przepisaniem n do m\n", n, m);
    przepis(&n,&m);
    printf("%d, %d ---- PO przepisaniu n do m\n", n, m);
    return 0;
}
