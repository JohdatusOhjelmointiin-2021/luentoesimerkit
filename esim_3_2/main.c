#include <stdio.h>

int main()
{
    int rivi;//rivi muuttuja on käytössä koko main-funktiossa
    for(rivi=1; rivi<5; rivi++){
        printf("%d. Tervehdys\n",rivi);
    }
    printf("Nyt rivi=%d\n",rivi);

    //x on käytössä vain for-silmukan sisällä
    for(int x=1; x<5; x++){
        printf("x saa arvon %d\n",x);
    }

    return 0;
}
