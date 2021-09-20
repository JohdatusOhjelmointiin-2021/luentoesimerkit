#include <stdio.h>
#include <string.h>

int main()
{
    //tutkitaan merkkitaulukoiden käyttöön liittyviä funktiota
    //niitä on kirjastossa string
    //esim. strcmp vertaa kahta merkkijonoa, jos ne ovat identtiset
    //funktio palauttaa arvon nolla

    char password[20];
    char realPassword[20]="secretPass";
    int test;
    printf("Anna salasana\n");
    fflush(stdin);
    gets(password);

//    test=strcmp(password,realPassword);
//    if(test==0){
//        printf("Salasana oikein\n");
//    }
//    else {
//        printf("Salasana vaarin\n");
//    }
    //jos sanat ovat samat, vertailun tulos on nolla
    //eli epätosi ja "huutomerkki" on sen vastakohta
    if(!strcmp(password,realPassword)){
        printf("Salasana oikein\n");
    }
    else {
        printf("Salasana vaarin\n");
    }

    //printf("Vertailun tulos=%d\n",test);
    return 0;
}
