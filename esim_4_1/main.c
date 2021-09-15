#include <stdio.h>
#define pi 3.14

int main()
{
    //ohjelma kysyy ympyrän säteen
    //sen jälkeen käyttäjä voi valita
    //1. Laske kehän pituus
    //2. Laske pinta ala
    //3. Anna uusi säde
    //4. Lopeta

    int choice=3;
    float radius;
    while(choice != 4){
        if(choice == 1){
            printf("Ympyran kehan pituus=%f\n",2*pi*radius);
        }
        else if(choice==2){
            printf("Ympyran pinta-ala=%f\n",pi*radius*radius);
        }
        else if (choice==3) {
            printf("Anna ympyran sade\n");
            scanf("%f",&radius);
        }
        else{
            printf("Vaara valinta, valitse(1-4)\n");
        }
        printf("1. Laske kehan pituus\n");
        printf("2. Laske pinta-ala\n");
        printf("3. Anna ympyran sade\n");
        printf("4. Lopeta\n");
        scanf("%d",&choice);
    }
    return 0;
}
