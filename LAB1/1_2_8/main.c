#include <stdio.h>
#include <stdlib.h>

int main()

//arithmetic average

    double x,y,z;
    scanf("%lf\n%lf\n%lf", &x,&y,&z);
    printf("Œrednia arytmetyczna tych liczb to:\n");
    printf("%lf",(x+y+z)/3);

/* FOR INT VARIABLE
    int x,y,z;
    scanf("%d\n%d\n%d", &x,&y,&z);
    printf("Œrednia arytmetyczna tych liczb to:\n");
    printf("%f",(double)(x+y+z)/3);
*/


    return 0;
}
