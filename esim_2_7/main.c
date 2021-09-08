#include <stdio.h>

int main()
{
    int num=0;
    printf("Anna kokonaisluku\n");
    scanf("%d",&num);
    printf("Alussa luku on %d\n",num);
    num++;
    //edellinen voidaan korvata lauseella
    //num=num+1;
    //tai myös lauseella
    //num+=1;
    printf("Nyt luku on %d\n",num);
    num--;
    printf("Nyt luku on %d\n",num);
    num+=3;
    printf("Nyt luku on %d\n",num);

    return 0;
}
