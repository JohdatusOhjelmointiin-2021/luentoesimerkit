#include <stdio.h>
#include <math.h>

int main()
{
    //math -kirjastosta löytyy pi:n arvo M_PI
    //ja myös neliöjuuri-funktio sqrt(x)
    //ja potenssi-funktion pow(x,n) esim. pow(3,2) =9

    float num;
    int expo;
    printf("Pi:n arvo on %f\n",M_PI);
    printf("Anna luku\n");
    scanf("%f",&num);

    printf("Anna eksponentti\n");
    scanf("%d",&expo);

    if(num >= 0){
        printf("Luvun %f neliojuuri on %f\n",num,sqrt(num));
    }
    else {
        printf("Negatiiviselle luvulle ei voi laskea neliojuurta\n");
    }
    printf("%f potenssiin %d = %f\n",num,expo,pow(num,expo));

    printf("3 potenssiin 2 = %f\n",pow(3,2));
    return 0;
}
