#include <stdio.h>

int main()
{
    //kysytään lukuja kunnes käyttäjä antaa
    //luvun 99
    //sen jälkeen tulostetaan annettujen lukujen summa

    int num=0;//varmistetaan ettei arvona ole 99
    int sumOfNums=0;
    while(num != 99){
        printf("Anna luku \n");
        scanf("%d",&num);
        sumOfNums += num;
    }
    //huom! Myös 99 lasketaan summaan, joten
    //vähennetään se
    sumOfNums=sumOfNums - 99;
    printf("Lukujen summa on %d\n",sumOfNums);
    return 0;
}
