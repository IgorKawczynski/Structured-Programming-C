#include <stdio.h>
#include <stdlib.h>

float *biedronkaniskieceny(){

    float *wsk1=malloc(2*sizeof(float));
    *(wsk1)=2.8;
    *(wsk1+1)=3.2;
    return &(*(wsk1+1)); // albo wsk+1 po prostu

}


int main()
{

    printf("%p  %f\n", biedronkaniskieceny(), *biedronkaniskieceny()); //najpierw odwolujemy sie do adresu, nastepnie wyluskujemy wartosc stojaca pod tym adresem
    printf("%p  %f\n", biedronkaniskieceny()-1, *(biedronkaniskieceny()-1)); //jesli chcemy wy³uskaæ adres wczeœniejszy, mozna to zrobic w ten sposob ( bo zmienne powyzej laduja na stercie, a nie na stosie )
    return 0;
}
