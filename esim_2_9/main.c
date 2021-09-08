#include <stdio.h>

int main()
{
    int num1,num2,num3;
    int max;
    int sum;
    float mean;
    printf("Anna kolme kokonaislukua pilkulla erotettuna\n");
    scanf("%d, %d, %d",&num1, &num2, &num3);
    max=num1;
    if(num2 > max){
        max=num2;
    }
    if(num3 > max){
        max=num3;
    }
    printf("luku %d on suurin\n",max);
    sum=num1+num2+num3;
    mean=(float)sum/(float)3;
    printf("Annettujen lukujen keskiarvo on %.1f\n",mean);
    return 0;
}
