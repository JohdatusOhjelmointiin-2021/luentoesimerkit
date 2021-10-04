#include <stdio.h>

int main()
{
    char nimi[50];
    int ika;
    FILE *printToFile;
    FILE *readFromFile;
    char merkki;
    printf("Anna nimi\n");
    fflush(stdin);
    gets(nimi);
    printf("Anna ika\n");
    scanf("%d",&ika);
    printToFile=fopen("C:/testaus/esim3.txt","a");
    if(printToFile){
        fprintf(printToFile,"%s %d\n",nimi,ika);
        fclose(printToFile);
    }
    else {
        printf("Tiedoston ei voi kirjoittaa\n");
    }
    readFromFile=fopen("C:/testaus/esim3.txt","r");
    if(readFromFile){
        printf("Tiedoston sisalto\n");
//luetaan ja tulostetaan merkki kerrallaan
        while ((merkki=fgetc(readFromFile)) != EOF) {
            printf("%c",merkki);
        }
//loppu

//luetaan ja tulostetaan rivi kerrallaan
//        char row[255];
//        while(!feof(readFromFile)){
//            printf("%s",row);
//            fgets(row, 255, readFromFile);
//        }
//loppu
        fclose(readFromFile);
        printf("\n");
    }
    else {
        printf("Tiedostoa ei voida lukea\n");
    }
    return 0;
}
