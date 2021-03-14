#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int n;
    unsigned int m;
    unsigned int k;
    scanf("%u\n%u\n%u", &n, &m, &k);
for(int x=0;x*n<k;x++){
       if((x*n)>m)printf("%u\n", x*n);


}

    return 0;
}
