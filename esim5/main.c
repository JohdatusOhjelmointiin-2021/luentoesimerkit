#include <stdio.h>
int sum(int a, int b);
void second_sum(int a, int b);

int main()
{
    int x=5;
    int y=7;
    int result;
    float test;
    result=sum(x,y);
    printf("The result is %d\n",result);

    second_sum(x,y);

    test=6.7;
    printf("Test kokonaislukuna on %.0f\n",test);
    return 0;
}

int sum(int a, int b)
{
    int answer=a+b;
    return answer;
}
void second_sum(int a, int b)
{
    int answer=a+b;
    printf("The sum of %d and %d is %d\n",a,b,answer);
}
