#include <stdio.h>

int main()
{
    int firstInt, secondInt;
    int sum;
    float fraction;
    printf("Anna kokonaisluku\n");
    scanf("%d", &firstInt);
    printf("Anna toinen kokonaisluku\n");
    scanf("%d",&secondInt);
    sum=firstInt+secondInt;
    printf("Antamiesi lukujen summa on %d\n",sum);
    fraction=(float)firstInt/(float)secondInt;
    printf("Antamiesi lukujen osamaara on %f\n",fraction);
    return 0;
}
