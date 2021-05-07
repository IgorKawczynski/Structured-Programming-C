///YET TO BE DONE
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//
//char *foo(char* napis[], int n){
//
//    int i, min=0;
//    char *temp;
//    for(i=1; i<n; i++)
//        if(strcmp(napis[min], napis[i])>0)
//            min=i;
//    temp=malloc((strlen(napis[min])+1)*sizeof(char));
//    strcpy(temp, napis[min]);
//    return temp;
//
//}
//
//
//wchar_t *wfoo(wchar_t** napis, int n){
//
//    int i, min=0;
//    wchar_t *temp;
//    for(i=1; i<n; i++)
//        if(wcscmp(napis[min], napis[i])>0)
//            min=i;
//    temp=malloc((wcslen(napis[min])+1)*sizeof(wchar_t));
//    wcscpy(temp, napis[min]);
//    return temp;
//
//}
//
//int main()
//{
//
//
//    char* tabnapis[]= {"hatab0", "hatab1", "hatab2"};
////    char** wsknapis=malloc(50*sizeof(char));
////    *(wsknapis)="hawsk0";
////    *(wsknapis+1)="hawsk1";
////    *(wsknapis+2)="hawsk2";
//    char* napys=foo(tabnapis, 50);
//    printf("%s\n", napys);
////
//
////
////    printf("%s\n", *(tabnapis));
////    printf("%s\n", *(wsknapis));
////    printf("%s\n", *(tabnapis+1));
////    printf("%s\n", *(wsknapis+1));
////    printf("%s\n", *(tabnapis+2));
////    printf("%s\n", *(wsknapis+2));
//
//    return 0;
//}
