#include <stdio.h>
#include <stdlib.h>

void przepis(int n, int *w){

    *w=n;

}



int main()
{
    int n;
    int w;
    scanf("%d\n%d", &n, &w);
    printf("%d, %d ---- PRZED przepisaniem n do w\n", n, w);

    przepis(n, &w);
    printf("%d, %d ---- PO przepisaniu n do w", n, w);
    return 0;
}
