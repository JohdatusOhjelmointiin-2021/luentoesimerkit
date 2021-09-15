#include <stdio.h>

int main()
{
    int num;
    int sum=0;
    printf("Anna kokonaisluku!\n");
    scanf("%d",&num);
    for(int x=0; x<=num; x++){
        if(x%2==0){
            printf("%d\n",x);
            sum+=x;
        }
    }
    printf("Summa=%d\n",sum);
    return 0;
}
