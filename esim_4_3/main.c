#include <stdio.h>

int main()
{
    //lasketaan potenssin arvo ilman valmista pow-funktiota

    float kantaLuku;
    int exponentti;
    float tulo=1;

    printf("Anna kantaluku\n");
    scanf("%f",&kantaLuku);
    printf("Anna eksponentti\n");
    scanf("%d",&exponentti);

    for(int x=1; x<=exponentti; x++){
        tulo=tulo*kantaLuku;
    }
    printf("%f potensiin %d = %f\n",kantaLuku, exponentti, tulo);

    return 0;
}
