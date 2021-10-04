#include <stdio.h>

int main()
{
    FILE *myfile;
    char merkki;
    myfile=fopen("C:/testaus/esim2.txt","r");
    if(myfile){
        printf("Tiedoston sisalto on:\n");
        while((merkki=fgetc(myfile)) != EOF){
            printf("%c",merkki);
        }
        printf("\n");
    }
    else {
        printf("Tiedostoa ei loydy\n");
    }

    return 0;
}
