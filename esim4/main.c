#include <stdio.h>

//funktio, joka laskee
//lausekkeen 5x+6 arvon
//tulos on kokonaisluku, joten funtio
//palauttaa kokonaisluvun

int f(int x)
{
    return 5*x + 6;
}


int main()
{
    int a;
    int answer;

    printf("Anna muuttujan:n arvo\n");
    scanf("%d",&a);
    answer=f(a);
    printf("1.Funktion arvo on %d\n",answer);
    printf("2.Funktion arvo on %d\n",f(a));
    return 0;
}
