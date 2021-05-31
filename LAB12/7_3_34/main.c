///////////////////YET TO BE DONE
//#include <stdio.h>
//#include <stdlib.h>
//#include <stdbool.h>
//
//
//struct element
//{
//    int i;
//    struct element * next;
//};
//
//
//
//struct element* Lista_bez_Glowy_utworz()
//{
//    return NULL;
//};
//
//
//
//struct element* Lista_bez_Glowy_dodajk(struct element*Lista, int a)
//{
//    struct element*wsk;
//    if(Lista==NULL)
//    {
//        wsk=malloc(sizeof(struct element));
//        Lista=wsk;
//    }
//    else
//    {
//       wsk=Lista;
//       while(wsk->next!=NULL)
//       {
//           wsk=wsk->next;
//       }
//       wsk->next=malloc(sizeof(struct element));
//       wsk=wsk->next;
//    }
//    wsk->i=a;
//    wsk->next=NULL;
//    return Lista;
//}
//
//
//
//void Lista_bez_Glowy_wyswietl(struct element*Lista)
//{
//    if(Lista==NULL)
//    {
//        printf("Lista jest pusta\n");
//    }
//    while(Lista!=NULL)
//    {
//        printf("%d\n",Lista->i);
//        Lista=Lista->next;
//    }
//    printf("----\n");
//}
//
//
//
//struct element* Lista_z_Glowa_utworz()
//{
//    struct element*temp=malloc(sizeof(struct element));
//    temp->next=NULL;
//    return temp;
//};
//
//
//
//void Lista_z_Glowa_dodajk(struct element*Lista, int a)
//{
//    struct element*wsk=Lista;
//    while(wsk->next!=NULL)
//    {
//        wsk=wsk->next;
//    }
//    wsk->next=malloc(sizeof(struct element));
//    wsk=wsk->next;
//    wsk->i=a;
//    wsk->next=NULL;
//}
//
//
//void Lista_z_Glowa_wyswietl(struct element*Lista)
//{
//    struct element*temp=Lista->next;
//    if(temp==NULL)
//    {
//        printf("Lista jest pusta\n");
//    }
//    while(temp!=NULL)
//    {
//        printf("%d\n",temp->i);
//        temp=temp->next;
//    }
//    printf("----\n");
//}
//
//bool Lista_bez_Glowy_wystepuje(struct element*Lista, int a)
//{
//    while(Lista!=NULL)
//    {
//        if(Lista->i==a)
//            return true;
//        Lista=Lista->next;
//    }
//    return false;
//}
//
//
//struct element* Lista_bez_Glowy_powtorzone(struct element*Lista1, struct element*Lista2)
//{
//    struct element* Lista3=NULL;
//    struct element* temp1;
//    struct element* temp2;
//    if((Lista1==NULL)||(Lista2==NULL))
//        return NULL;
//    temp1=Lista1;
//    while(temp1!=NULL)
//    {
//        if((Lista_bez_Glowy_wystepuje(Lista2, temp1->i))&&(!Lista_bez_Glowy_wystepuje(Lista3, temp1->i)))
//        {
//            if(Lista3==NULL)
//                temp2=Lista3=malloc(sizeof(struct element));
//            else
//            {
//                temp2->next=malloc(sizeof(struct element));
//                temp2=temp2->next;
//            }
//            temp2->i=temp1->i;
//        }
//        temp1=temp1->next;
//    }
//    temp2->next=NULL;
//    return Lista3;
//
//};
//
////bool Lista_z_Glowa_wystepuje(struct element*Lista, int i)
////{
////    while(Lista->next!=NULL)
////    {
////        if(Lista->next->i==i)
////            return true;
////        Lista=Lista->next;
////    }
////    return false;
////}
////
////struct element* Lista_z_Glowa_powtorzone(struct element*Lista1, struct element*Lista2)
////{
////    struct element* Lista3=NULL;
////    struct element* temp1;
////    struct element* temp2;
////    if((Lista1->next==NULL)||(Lista2->next==NULL))
////        return NULL;
////    temp1=Lista1->next;
////    while(temp1!=NULL)
////    {
////        if((Lista_bez_Glowy_wystepuje(Lista2, temp1->i))&&(!Lista_bez_Glowy_wystepuje(Lista3, temp1->i)))
////        {
////            if(Lista3->next==NULL)
////                temp2=Lista3=malloc(sizeof(struct element));
////            else
////            {
////                temp2->next=malloc(sizeof(struct element));
////                temp2=temp2->next;
////            }
////            temp2->i=temp1->i;
////        }
////        temp1=temp1->next;
////    }
////    temp2->next=NULL;
////    return Lista3;
////};
//
//
//
//int main()
//{
//    struct element* lista1=Lista_bez_Glowy_utworz();
//    lista1=Lista_bez_Glowy_dodajk(lista1, 6);
//    lista1=Lista_bez_Glowy_dodajk(lista1, 4);
//    lista1=Lista_bez_Glowy_dodajk(lista1, 1);
//    lista1=Lista_bez_Glowy_dodajk(lista1, 23);
//    Lista_bez_Glowy_wyswietl(lista1);
//    struct element* lista2=Lista_bez_Glowy_utworz();
//    lista2=Lista_bez_Glowy_dodajk(lista2, 21);
//    lista2=Lista_bez_Glowy_dodajk(lista2, 56);
//    lista2=Lista_bez_Glowy_dodajk(lista2, -32);
//    lista2=Lista_bez_Glowy_dodajk(lista2, 79);
//    Lista_bez_Glowy_wyswietl(lista2);
//
//    struct element* lista3=Lista_bez_Glowy_powtorzone(lista1, lista2);
//    Lista_bez_Glowy_wyswietl(lista3);
//
////
////    struct element* lista4=Lista_z_Glowa_utworz();
////    Lista_z_Glowa_dodajk(lista4, 3);
////    Lista_z_Glowa_dodajk(lista4, 25);
////    Lista_z_Glowa_dodajk(lista4, 43);
////    Lista_z_Glowa_dodajk(lista4, 3);
////    Lista_z_Glowa_dodajk(lista4, -2);
////    Lista_z_Glowa_dodajk(lista4, 66);
////    Lista_z_Glowa_wyswietl(lista4);
////    struct element* lista5=Lista_z_Glowa_utworz();
////    Lista_z_Glowa_dodajk(lista5, 212);
////    Lista_z_Glowa_dodajk(lista5, 51);
////    Lista_z_Glowa_dodajk(lista5, 4643);
////    Lista_z_Glowa_dodajk(lista5, 321);
////    Lista_z_Glowa_dodajk(lista5, -23);
////    Lista_z_Glowa_dodajk(lista5, 44);
////    Lista_z_Glowa_dodajk(lista5, 47);
////    Lista_z_Glowa_wyswietl(lista5);
////
////    struct element* lista6=Lista_z_Glowa_powtorzone(lista4, lista5);
////    Lista_bez_Glowy_wyswietl(lista6);
//
//    return 0;
//}
