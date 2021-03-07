#include <stdio.h>
#include <stdlib.h>

int main()
{
    int figure,x,y,z;
    float a,b,h;
    float area;
    printf("Tell me what figure u want to calculate the area, 1 is square, 2 is rectangle, 3 is triangle\n");
    scanf("%d", &figure);
    if (figure==1){
        printf("Side length\n");
        scanf("%f", &a);
        area=a*a;
        printf("Area is %f", area);

    } else if (figure==2){
               printf("First and Second Side length\n");
               scanf("%f\n%f", &a, &b);
        area=a*b;
        printf("Area is %f", area);
               } else if (figure==3){
               printf("Sideline and Height of Triangle\n");
        scanf("%f\n%f", &a, &h);
        area=(a*h)/2;
        printf("Area is %f", area);

               }
    return 0;
}
