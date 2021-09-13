#include <stdio.h>

int main()
{
    //for silmukka sopii tilanteisiin, joissa
    //toistojen määrä on etukäteen tiedossa

    //sama voidaan tehdä myös while silmukalla
    //esim. seuraava for-rakenne voidaan korvata
    //while rakenteella

//    int myNum;
//        int sumOfNums=0;
//        for(int x=1; x<=5; x++){
//            printf("Give me a number\n");
//            scanf("%d",&myNum);
//            sumOfNums=sumOfNums+myNum;
//        }
//        printf("The sum of given numbers is %d\n",sumOfNums);

    int myNum;
    int sumOfNums=0;
    int x=1;
    while(x<=5){
        printf("Give me a number\n");
        scanf("%d",&myNum);
        sumOfNums=sumOfNums+myNum;
        x++;
    }
    printf("The sum of given numbers is %d\n",sumOfNums);

    return 0;
}
