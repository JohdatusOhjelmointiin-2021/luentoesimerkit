#include <stdio.h>

int main()
{
    //lasketaan annetun luvun kertoma

    int n;
    int tulo=1;
    printf("Anna kokonaisluku\n");
    scanf("%d",&n);
    //x voi alkaa 1:stä tai 2:sta
    for(int x=1; x<=n; x++){
        tulo=tulo*x;
    }
    printf("Luvun %d kertoma=%d\n",n,tulo);
    return 0;
}
