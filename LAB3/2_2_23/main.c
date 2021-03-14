#include <stdio.h>
#include <stdlib.h>

/* postac iteracyjna

int fibonacci(unsigned int n){

int x=n;
int fcurrent=1;
int fprevious=0;
for(int i=0;i<x-1;i++){
    fcurrent=fcurrent+fprevious;
    fprevious=fcurrent-fprevious;

}
return fcurrent;
}

*/


//postac rekurencyjna

int fibonacci2(unsigned int n){
if(n<3) return 1;
return fibonacci2(n-1)+fibonacci2(n-2);


}


int main()
{
    int n;
    scanf("%d", &n);

    printf("%d",fibonacci2(n));


    return 0;
}
