#include <stdio.h>
#include <string.h>
int main()
{
    //funktiolla strcpy voidaan koioida merkkijono
    //toiseen merkkijonoon

    char myString[18]="aloitus teksti";
    printf("ALKU: %s\n",myString);
    //seuraava ei onnistu
    //myString="lopetus teksti";
    //joten käytetään strcpy-funktiota
    strcpy(myString,"lopetus teksti");

    //tai sitten sijoitetaan merkkikerrallaan
    myString[0]='a';
    myString[1]='b';
    myString[2]='\0';
    printf("LOPPU: %s\n",myString);

    printf("Merkkijonon myString pituus = %d\n",strlen(myString));
    return 0;
}
