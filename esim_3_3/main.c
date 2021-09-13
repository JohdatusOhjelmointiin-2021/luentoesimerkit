#include <stdio.h>

int main()
{
    //kysytään 5 kokonaislukua ja lasketaan
    //niiden summa ja keskiarvo

    int num;
    int sumOfNums=0;
    float average;

    for(int x=1; x<=5; x++){
        printf("Anna %d. luku\n",x);
        scanf("%d",&num);
        sumOfNums+=num;
    }
    average=(float)sumOfNums/5;
    printf("Lukujen summa=%d ja keskiarvo=%f\n",sumOfNums,average);
    return 0;
}
