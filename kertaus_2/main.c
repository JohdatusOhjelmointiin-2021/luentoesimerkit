#include <stdio.h>

int main()
{
    int kunta;
    float brutto, prosentti,vero;
    printf("Valitse kunta\n");
    printf("1=Oulu\n");
    printf("2=Kempele\n");
    printf("3=Lumijoki\n");
    printf("4=Muhos\n");
    scanf("%d",&kunta);
    printf("Anna bruttotulo\n");
    scanf("%f",&brutto);
    switch (kunta) {
    case 1:{
        prosentti=0.20;
        break;
        }
    case 2:{
        prosentti=0.2050;
        break;
        }
    case 3:{
        prosentti=0.21;
        break;
        }
    case 4:{
        prosentti=0.21;
        break;
        }
    default:{
        printf("Piti valita 1-4\n");
        return 0;
    }

    }
    vero=prosentti*brutto;
    printf("Kunnallisvero = %.2f\n",vero);
    return 0;
}
