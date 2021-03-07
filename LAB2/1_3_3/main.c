#include <stdio.h>
#include <stdlib.h>

int main()
{

 int x;
    int y;
    int z;
    scanf("%d\n%d\n%d", &x, &y, &z);
    if(x>=y && x>=z){
    printf("%d", x);
    }
    else if (y>=x && y>=z) {
        printf("%d", y);
    }
    else if (z>=x && z>=y) {
        printf("%d", z);
    }
    return 0;
}
