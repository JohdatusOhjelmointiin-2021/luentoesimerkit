#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Anna kaksi kokonaislukua pilkulla erotettuna\n");
    scanf("%d, %d",&num1, &num2);
    if(num1 > num2){
        printf("Annoit luvut %d ja %d, joista suurempi on %d\n",num1,num2,num1);
    }
    else if(num2 > num1){
        printf("Annoit luvut %d ja %d, joista suurempi on %d\n",num1,num2,num2);
    }
    else{
        printf("Luvut ovat yhtasuuret\n");
    }

    return 0;
}
