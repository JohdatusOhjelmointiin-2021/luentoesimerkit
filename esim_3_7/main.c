#include <stdio.h>

int main()
{
    //kysellään lukuja, niin kauan kuin
    //annetut luvut ovat alle 20

    int num=0; //alkuarvo on oltava alle 20
    while(num<20){
        printf("Anna luku \n");
        scanf("%d",&num);
    }
    printf("LOPPU\n");

    //toinen vaihtoehto on do while-rakenne

//    int num; //alkuarvo ei tarvitse asettaa

//    do
//    {
//        printf("Anna luku \n");
//        scanf("%d",&num);
//    }
//    while(num<20);

//    printf("LOPPU\n");

    //Silmukan sisälle voidaan laittaa
    //myös break-komento, jolla silmukan
    //suoritus lopetetaan
    //esim
//    if(num==10){
//        break;
//    }

    return 0;
}
