#include <stdio.h>
void tulosta_v1();
void tulosta_v2(int xInTulosta2);

int xGlobal;
//tämä on siis Globaali muuttuja
//Globaalien muuttujien käyttöä pidetään
//huonona ohjelmointitapana

int main()
{
    int xInMain;
    printf("Anna luku\n");
    scanf("%d",&xInMain);
    printf("Anna toinen luku\n");
    scanf("%d",&xGlobal);

    tulosta_v1();
    tulosta_v2(xInMain);
    int x;
    for(x=1; x<4; x++){
        printf("nyt x=%d\n",x);
    }
    printf("Silmukan jalkeen x=%d\n",x);
    return 0;
}

void tulosta_v1(){
    int xInMain;
    //tämä on siis eri muuttuja kuin main-funktiossa
    //luotu samanniminen muuttuja
    printf("Luku on %d\n",xInMain);

    printf("Globaalin muuttuja arvo on %d\n",xGlobal);
}

void tulosta_v2(int xInTulosta2){
    printf("Luku on %d\n",xInTulosta2);
}
