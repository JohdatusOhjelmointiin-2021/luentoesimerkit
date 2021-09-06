#include <stdio.h>

int main()
{
    char myChar;
    char firstName[10];
    int myNumbers[3];
    printf("Anna merkki\n");
//    scanf("%c",&myChar);
//    printf("Annettu merkki %c\n",myChar);
    printf("Kerro etunimesi\n");
    scanf("%s",firstName);
    printf("Terve %s\n",&firstName);

    //kaikki seuraavat viittaavat samaan
    //muistipaikkaan eli taulukon ensimmäiseen alkioon
    //&firstName[0]
    //&firstName
    //firstName
    printf("ensimmaisen alkion osoite on %d\n",&firstName[0]);
    printf("ensimmaisen alkion osoite on %d\n",&firstName);
    printf("ensimmaisen alkion osoite on %d\n",firstName);
    printf("toisen alkion osoite on %d\n",&firstName[1]);
    printf("ensimmainen alkio on %c\n",firstName[0]);
    printf("ensimmaisen luvun osoite on %d\n",&myNumbers[0]);
    printf("toisen luvun osoite on %d\n",&myNumbers[1]);
    return 0;
}
