#include <stdio.h>
#include <stdlib.h>
//albo tu moze byc static int

void zlicz(){
    static int temp=1;
    printf("%d", temp++);


}


int main()
{


    zlicz();
    zlicz();
    zlicz();
    zlicz();
    printf("Hello world!\n");
    zlicz();
    zlicz();
    return 0;
}
