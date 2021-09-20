#include <stdio.h>
void second_sum(int a, int b);
int sum(int a, int b);

int main()
{
    printf("Funktioiden testaus!\n");
    //kutsutaan funktiota second_sum
    second_sum(3,7);
    int tulos;
    //kutsutaan funktiota sum
    tulos=sum(5,8);
    printf("Summa on %d\n",tulos);
    return 0;
}

int sum(int a, int b)
{
//    int answer=a+b;
//    return answer;
    return a+b;
}

void second_sum(int a, int b)
{
    int answer=a+b;
    printf("The sum is %d\n", answer);
}
