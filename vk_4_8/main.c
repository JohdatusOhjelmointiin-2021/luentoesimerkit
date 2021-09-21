#include <stdio.h>
#include <stdlib.h>

int main()
{
    char kok[8];
    char des[8];
    printf("Anna kokonaisluku\n");
    scanf("%s",&kok);
    printf("Anna desimaaliluku\n");
    scanf("%s",&des);
    int luku=atoi(kok);
    double luku2=atof(des);
    printf("Summa on %f\n",luku+luku2);
    return 0;
}
