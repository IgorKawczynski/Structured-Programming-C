#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int n;
    scanf("%u", &n);
    unsigned int fn=1;
    unsigned int fn_1=0;
    for(int i=0;i<n;i++){
        fn=fn+fn_1;
        fn_1=fn-fn_1;

    }printf("%u", fn_1);




    return 0;
}
