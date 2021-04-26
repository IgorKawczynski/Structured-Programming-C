#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//ODWROCENIE CYFR W LICZBIE
int reverse(int n){

    int temp=0;
    while(n!=0)
    {
        temp=temp*10;
        temp=temp+n%10;
        n=n/10;

    }
    return temp;
}

//POTEGA DO KWADRATU
int potega_kwadrat(unsigned int n){

    int wynik=1;
    for(int i=0;i<2;i++)
    {
        wynik=wynik*n;
    }

}

//POTEGA 2 do n
int potega_dwa_n(unsigned int n){

    int wynik=2;
    for(int i=0;i<=n;i++)
    {
        wynik=wynik*2;
    }
    return wynik;
}

//POTEGA n do m
float potega_n(float n, float m){

    if(n==0 && m==0)
        return 0;
    if(m==0)
        return 1;
    if(m<0)
        return NAN;

    float wynik=1;
    for(int i=0; i<m; i++)
    {
        wynik=wynik*n;

    }
    return wynik;

}

//PIERWIASTEK KWADRATOWY
int pierwiastek(unsigned int n){

    int wynik;
    if(n>0)
    {
        for(int i=0; i*i<=n; i++)
        {
            wynik=i;
        }

    }
    return wynik;

}

//PIERWIASTEK n do m (CALOSC)
/////////////////////////////////////////////////////////////
int potega_n(int n, int m){

    int wynik=1;
    if(n==0)
        return 0;
    if(m==0)
        return 1;
    if(m<1)
        return NAN;
    if(m>1)
    {
        for(int i=0;i<m;i++)
        {
            wynik=wynik*n;
        }

    }
    return wynik;

}


float pierwiastek_n(unsigned int n, int m){

    float wynik=0;
    if(m>1)
    {
        for(int i=0; potega_n(i, m)<=n; i++)
        {
            wynik=i;
        }

    }
    return (float)wynik;

}
/////////////////////////////////////////////////////////
//SUMA PIERWIASTKOW
/////////////////////////////////////////////////////////
int potega_n(unsigned int n, unsigned int m){

    if(m==0)
        return 1;
    if(n==0 && m)
        return 0;
    int wynik=1;
    for(int i=0;i<m;i++)
    {
        wynik=wynik*n;
    }
    return wynik;


}

int pierwiastek_n(unsigned int n, unsigned int m){

    int wynik=0;
    if(n==0)
        return 0;
    if(m>1)
    {
        for(int i=0; potega_n(i, m)<=n; i++)
        {
            wynik=i;
        }
    }
    return wynik;
}

int SUMA(unsigned int n, unsigned int m){

    int wynik=0;
    if(m>1)
    {
        for(int i=0; i<=n; i++)
        {
            wynik=wynik+pierwiastek_n(i, m);

        }

    }
    return wynik;
}
//////////////////////////////////////////////////////////////////
//NWD-NajwiekszyWspolnyDzielnik
//Jako rekurencja
int NWD(unsigned int n, unsigned int m){

    if(n==m)
        return n;
    if(n>m)
        return NWD(n-m, m);
    if(m>n)
        return NWD(n, m-n);

}

//Jako inkrementacja
printf("Program obliczajacy NWD\n");
    int a;
    printf("Wypisz a :\n");
    scanf("%d", &a);
    int b;
    printf("Wypisz b :\n");
    scanf("%d", &b);
    int c;
    while(b!=0)
    {
        c=a%b;
        a=b;
        b=c;

    }
printf("NWD(a,b) =  %d\n", a);

//FIBONACCI
int rekFib(unsigned int n){

    if(n==0)
        return 0;
    if(n==1)
        return 1;
    return rekFib(n-1) + rekFib(n-2);

}
 //ROZKLADY NA SUME KWADRATOW LICZB
 /////////////////////////////////////////////////////////
 int potega_kwadrat(unsigned int n){

    if(n==0)
        return 0;
    int wynik=1;
    for(int i=0;i<2;i++)
    {
        wynik=wynik*n;
    }
    return wynik;


}

int rozklady(unsigned int n){

    int pocz=0;
    int koniec=n;
    int srodek;
    while(koniec-pocz>1)
    {
        srodek=(pocz+koniec)/2;
        if(srodek*srodek<=n)
            pocz=srodek;
        else
            koniec=srodek;
    }
    if(n<=1)
        return koniec;
    else
        return pocz;
}

void wypisz_a(unsigned int n){

    int i;
    int p;
    for(i=1; i<=rozklady(n); i++)
    {
        p=rozklady(n-i*i);
        if((p!=0)&&(i*i+p*p==n))
            printf("%d * %d + %d * %d = %d | ", i, i, p, p, n);
    }
}

void wypisz_b(unsigned int n){ // GDY a^2 + b^2 i b^2 + a^2  traktujemy jako to samo

    int i;
    int p;
    for(i=1; i<=rozklady(n); i++)
    {
        p=rozklady(n-i*i);
        if((i*i+p*p==n)&&(i<p))
            printf("%d * %d + %d * %d = %d | ", i, i, p, p, n);
    }
}
/////////////////////////////////////////////////////////////
//WIELOKROTNOSCI --- suma liczb wielokrotnosci n wiekszych niz m i mniejszych niz k
int suma_wielokrotnosci(unsigned int n, unsigned int m, unsigned int k){

    int suma=0;
    for(int i=0;i<k;i++)
    {
        if((i*n)>m && (i*n)<k)
            suma=suma+(i*n);

    }
    return suma;

}



int main()
{


    return 0;
}
