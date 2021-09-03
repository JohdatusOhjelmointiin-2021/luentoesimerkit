#include <stdio.h>

int main()
{
    int userIntValue;
    float userFloatValue;
    printf("Terve Maailma!\n");
    printf("Anna jokin kokonaisluku\n");
    scanf("%d",&userIntValue);
    printf("Antamasi luku on %d eiko totta?\n",userIntValue);
    printf("Se on tallennettu muistipaikkaan %d\n",&userIntValue);

    printf("Anna desimaaliluku\n");
    scanf("%f",&userFloatValue);
    printf("Antamasi desimaaliluku on %f\n",userFloatValue);
    printf("Antamasi desimaaliluku 2.des tarkkuudella on %.2f\n",userFloatValue);
    return 0;
}
