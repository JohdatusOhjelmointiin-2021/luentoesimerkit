#include <stdio.h>

int main()
{
//    char fname[30];
//    printf("What is your name!\n");
//    scanf("%s",fname);
//    printf("Hello %s\n",fname);
//    printf("Eka merkki on %c\n",fname[0]);

    int ages[5]={6,3,12,22,31};
    printf("The age of the second person is %d\n",ages[1]);
    printf("Anna uusi arvo toiselle alkiolle\n");
    scanf("%d",&ages[1]);
    printf("The age of the second person is %d\n",ages[1]);

    printf("What is wrong %d\n",ages[5]);
    //alkiota ages[5] ei ole olemassa

    int tableOfNumbers[2][3]={
        {1,2,3},
        {4,5,6}
    };
    printf("The last number in the table is %d\n",tableOfNumbers[1][2]);
    return 0;
    return 0;
}
