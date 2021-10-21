#include <stdio.h>

int main()
{
    FILE *sourcePointer;
    FILE *targetPointer;
    char merkki;
    sourcePointer=fopen("C:/QtProjects/tvt21spo/vk_6_2/source.txt","r");
    if(sourcePointer == NULL){
        printf("Tiedostoa ei voida lukea\n");
        return 0;
    }
    targetPointer=fopen("C:/QtProjects/tvt21spo/vk_6_2/target.txt","w");
    if(targetPointer == NULL){
        printf("Tiedostoon ei voi kirjoittaa\n");
        return 0;
    }
    while ((merkki = fgetc(sourcePointer)) != EOF ) {
        if(merkki == ','){
            printf(";");
            fprintf(targetPointer,";");
        }
        else {
           printf("%c",merkki);
           fprintf(targetPointer,"%c",merkki);
        }
    }

    fclose(sourcePointer);
    fclose(targetPointer);
    return 0;
}
