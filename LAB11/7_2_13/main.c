#include <stdio.h>
#include <stdlib.h>

struct trojkat
{
    double a;
    double c;

};

struct prostokat
{
    double a;
    double b;

};

struct trapez
{
    double a;
    double b;
    double h;

};

struct rownoleglobok
{
    double a;
    double h;

};

union wymiary
{
    struct trojkat troj;
    struct rownoleglobok rown;
    struct prostokat prost;
    struct trapez trap;

};

struct figura
{
    union wymiary wym;
    int fig; // 1 = trojkat | 2 = rownoleglobok | 3 = prostokat | 4 = trapez
};

double pole(struct figura f)
{
    if(f.fig==1)
        return ((f.wym.troj.a * f.wym.troj.c)/2);
    if(f.fig==2)
        return (f.wym.rown.a * f.wym.rown.h);
    if(f.fig==3)
        return (f.wym.prost.a * f.wym.prost.b);
    if(f.fig==4)
        return (((f.wym.trap.a+f.wym.trap.b)/2)*f.wym.trap.h);

}


int main()
{
    struct trojkat trojkat1;
    trojkat1.a=3;
    trojkat1.c=5;
    struct figura fig1;
    fig1.fig=1;
    fig1.wym.troj=trojkat1;

    printf("Pole tej figury jest rowne : %lf\n", pole(fig1));

    printf("Hello world!\n");
    return 0;
}
///////////////////ALBO INTUICYJNIEJ :
//#include <stdio.h>
//#include <stdlib.h>
//
//struct Figura
//{
//    int fig; // trojkat - 0, prostokat - 1, rownoleglobok - 2, trapez -3
//    double a, h, b;
//};
//
//double pole(struct Figura f)
//{
//    if(f.fig == 0)
//    {
//        return f.a * f.h / 2;
//    }
//    if(f.fig == 1)
//    {
//        return f.a * f.b;
//    }
//    if(f.fig == 2)
//    {
//    return f.a * f.h;
//    }
//    if(f.fig == 3)
//    {
//        return (f.a + f.b) * f.h / 2;
//    }
//    return 0;
//}
//
//
//int main()
//{
//    struct Figura trojkat = {0, 3, 4, 0};
//    struct Figura prostokat = {1, 3, 0, 4};
//    struct Figura rowneloglobok = {2, 3, 4, 0};
//    struct Figura trapez = {3, 2, 4, 1};
//
//    printf("Pole -  trojkat = %lf\n", pole(trojkat));
//    printf("Pole -  prostakat = %lf\n", pole(prostokat));
//    printf("Pole -  rownoleglobok = %lf\n", pole(rowneloglobok));
//    printf("Pole -  trapez = %lf\n", pole(trapez));
//    return 0;
//}
