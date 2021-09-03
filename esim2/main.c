#include <stdio.h>

int main()
{
//    %d tarkoittaa kokonaislukua eli int
//    %f tarkoittaa liukulukua esim. float
    float celcius, fahrenheit;
    printf("Anna lampotila Celcius-asteina\n");
    scanf("%f",&celcius);
    fahrenheit=1.8*celcius + 32;
    printf("Antamasi lampotila %.2f on Fahrenheit asteina %.2f\n",celcius, fahrenheit);
    return 0;
}
