#include <stdio.h>
void tulostaMjono(char *mjono);

int main()
{
    char lause[20]="Koe lause";
    tulostaMjono(lause);
    return 0;
}

void tulostaMjono(char *mjono){
    printf("TULOSTUS\n");
    printf("%s\n",mjono);
}
