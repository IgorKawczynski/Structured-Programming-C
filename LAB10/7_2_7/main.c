#include <stdio.h>
#include <stdlib.h>

struct zespolone{

    double re;
    double im;

};

void wyswietl_zespolone(struct zespolone liczba){

    printf("%lf + %lfi \n", liczba.re, liczba.im);

}

struct zespolone dodaj(struct zespolone z1, struct zespolone z2){

    struct zespolone suma;
    suma.re=z1.re+z2.re;
    suma.im=z1.im+z2.im;
    return suma;
};

struct zespolone mnozenie(struct zespolone z1, struct zespolone z2){

    struct zespolone iloczyn;
    iloczyn.re=(z1.re*z2.re)-(z1.im*z2.im);
    iloczyn.im=(z1.im*z2.re)+(z1.re*z2.im);
    return iloczyn;

};

struct zespolone dzielenie(struct zespolone z1, struct zespolone z2){

    struct zespolone iloraz;
    iloraz.re=((z1.re*z2.re)+(z1.im*z2.im))/((pow(z2.re, 2)+pow(z2.im, 2)));
    iloraz.im=(z1.im*z2.re)-(z1.re*z2.im)/((pow(z2.re, 2)+pow(z2.im, 2)));
    return iloraz;

};

struct zespolone sprzezona(struct zespolone z1){

    struct zespolone sprzezone1;
    sprzezone1.re=z1.re;
    sprzezone1.im=(-1)*(z1.im);
    return sprzezone1;

};

int main()
{
    struct zespolone z1;
    z1.im=4.5;
    z1.re=5.5;
    struct zespolone z2;
    z2.im=5.4;
    z2.re=6.6;
    wyswietl_zespolone(z1);
    wyswietl_zespolone(z2);

    struct zespolone suma;
    suma=dodaj(z1, z2);
    wyswietl_zespolone(suma);

    struct zespolone iloczyn;
    iloczyn=mnozenie(z1, z2);
    wyswietl_zespolone(iloczyn);

    struct zespolone iloraz;
    iloraz=dzielenie(z1, z2);
    wyswietl_zespolone(iloraz);

    struct zespolone sprzezenie;
    sprzezenie=sprzezona(z1);
    wyswietl_zespolone(sprzezenie);

    return 0;
}
