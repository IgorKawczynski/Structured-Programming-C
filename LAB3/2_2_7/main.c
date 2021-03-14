#include <stdio.h>
#include <stdlib.h>

int potega(int n, int m){
    int potega=1;
if(n==0 && m==0)return 0;
for(int i=0;i<m;i++){
    potega=potega*n;

}

return potega;
}

int main()
{
    int x,y;
    scanf("%d\n%d", &x, &y);
    printf("%d", potega(x, y));
    return 0;
}
