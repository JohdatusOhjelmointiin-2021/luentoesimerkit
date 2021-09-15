#include <stdio.h>

int main()
{
    int num;
    printf("Anna kokonaisluku\n");
    scanf("%d",&num);
    for(int x=1; x<=10; x++){
        printf("%d*%d=%d\n",num,x,num*x);
    }

    return 0;
}
