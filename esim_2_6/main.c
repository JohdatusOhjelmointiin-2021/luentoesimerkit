#include <stdio.h>

int main()
{
//    int num1,num2;
//    int result;
//    printf("anna jaettava\n");
//    scanf("%d",&num1);
//    printf("anna jakaja\n");
//    scanf("%d",&num2);
//    result=num1 % num2;
//    printf("Jakojaannos on %d\n",result);

    //onko luku parillinen vai pariton?
    //jos parillinen luku jaetaan kahdella
    //on jakojäännös nolla
    int num;
    int test;
    printf("Anna kokonaisluku\n");
    scanf("%d",&num);
    test = num % 2;
    if(test==0){
        printf("Luku on parillinen\n");
    }
    else {
        printf("Luku on pariton\n");
    }

    return 0;
}
