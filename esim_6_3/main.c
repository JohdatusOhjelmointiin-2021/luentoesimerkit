#include <stdio.h>

int main()
{
    //tutkitaan osoitinmuuttujaa
    //sen tunnistaa nimen edessä olevasta * merkistä
    //osoitinmuuttujia tarvitaan kun
    //käsitellään tiedostoja
    //sen avulla voidaan lähettää arrayn osoite funtiolle

    int myVar=101;
    int *myPointer;
    //myPointeriin voidaan tallentaa kokonaislukumuuttujan osoite
    myPointer=&myVar;

    printf("Muuttujan myVar osoite = %d\n",&myVar);
    printf("*myPointer = %d\n",*myPointer);
    printf("myPointer = %d\n",myPointer);
    return 0;
}
