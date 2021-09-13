#include <stdio.h>

int main()
{
    //kysytään 5 lukua lasketaan lukujen summa
    //lopuksi tulostetaan annetut luvut

    int num[5]; //alkiot num[0],...,num[4]
    int sumOfNums=0;

    for (int x=0; x<=4; x++){
        printf("Anna %d. luku\n",x);
        scanf("%d",&num[x]);
        //sumOfNums+=num[x];
        sumOfNums=sumOfNums + num[x];
    }
    printf("Lukujen summa on %d\n",sumOfNums);
    printf("Annetut luvut olivat\n");
    for(int y=0; y<=4; y++){
        printf("%d , ",num[y]);
    }
    printf("Jos pilkkua ei halua loppuun, niin luvut olivat\n");
    for(int y=0; y<=3; y++){
        printf("%d , ",num[y]);
    }
    printf("%d ",num[4]);
    return 0;
}
