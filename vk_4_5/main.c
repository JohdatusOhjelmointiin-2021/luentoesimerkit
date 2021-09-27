#include <stdio.h>
void vertaile(int a, int b);

int main()
{
    printf("Testit\n");
    vertaile(1,5);
    vertaile(7,5);
    vertaile(5,5);
    return 0;
}

void vertaile(int a, int b){
    if(a>b){
        printf("Luvut suuruusjarjestyksessa ovat %d ja %d\n",a,b);
    }
    else if(b>a){
       printf("Luvut suuruusjarjestyksessa ovat %d ja %d\n",b,a);
    }
    else {
        printf("Luvut ovat yhtasuuret\n");
    }
}
