#include <stdio.h>

int main()
{
    FILE *sourcePointer;
    char merkki;
    int sanat=0;
    int rivit=0;
    sourcePointer=fopen("C:/QtProjects/tvt21spo/vk_6_3/testi.txt","r");
    if(sourcePointer == NULL){
        printf("Tiedostoa ei voitu avata\n");
        return 0;
    }
    while ((merkki=fgetc(sourcePointer)) != EOF){
        if(merkki==' ' || merkki=='\n'){
            sanat++;
        }
        if(merkki=='\n'){
            rivit++;
        }
    }

    fclose(sourcePointer);
    printf("sanoja oli %d ja riveja %d kpl\n",sanat,rivit);
    return 0;
}
