#include <stdio.h>
#include <stdlib.h>

int main()
{
    char operation;
    double x,y;
    printf("Choose what operation u want to bring on ( +, -, *, / )\n");
    scanf("%c", &operation);
    printf("Choose the numbers\n");
    scanf("%lf\n%lf", &x, &y);
    printf("The result is :\n");

switch (operation){
case '+': printf("%lf", x+y); break;
case '-': printf("%lf", x-y); break;
case '*': printf("%lf", x*y); break;
case '/': if(y!=0) {printf("%lf", x/y);}else{printf("u cannot divide by 0");}; break;
default : printf("U choose the wrong operation! U can only use +, -, *, /");

}
    return 0;
}
