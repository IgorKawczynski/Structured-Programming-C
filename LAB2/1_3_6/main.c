#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,d,e,f;
    printf("Type the numbers\n");
    scanf("%f\n%f\n%f\n%f\n%f\n%f", &a, &b, &c, &d, &e, &f);
    float W,WX,WY;
    W=(a*e)-(b*d);
    WX=(c*e)-(b*f);
    WY=(a*f)-(c*d);
    float x=WX/W;
    float y=WY/W;
    if(W!=0){
        printf("%f\n%f", x, y);
    } else {
        if (W==0 && WX==0 && WY==0) {
    printf("infinitely many solutions\n");
    } else {
    printf("no solution, W is 0");
    }
    }

    return 0;
}
