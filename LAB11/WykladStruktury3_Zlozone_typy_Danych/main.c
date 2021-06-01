#include <stdio.h>
#include <stdlib.h>

struct Structure {

    int field1;
    double field2;
    char field3;
};


int suma(int a, int b){

    return a + b;

}

int suma_Structure(struct Structure zmiennaS){

    return (zmiennaS.field1+zmiennaS.field2);

}

int suma_Structure_wsk(struct Structure *zmiennaS){

    return (zmiennaS->field1+zmiennaS->field2); //zamiast operatora kropki jest strzalka przy wskaznikach, albo nawias i gwiazdka

}


int main()
{
    //bezwzgledna
    struct Structure zmiennaS = {-20, 3.4, 'w'};
    printf("%d\n", abs(zmiennaS.field1));

    //suma
    struct Structure zmiennaS2 = {4, 5, 'q'};
    printf("%d\n", suma(zmiennaS2.field1, zmiennaS2.field2));

    //suma z funkcji ze struktury
    int suma = suma_Structure(zmiennaS2);
    printf("%d\n", suma);

    //suma z funkcji ze struktury ze wskaznikiem
    int suma2 = suma_Structure_wsk(&zmiennaS2); //adres
    printf("%d\n", suma2);


    printf("Hello world!\n");
    return 0;
}
