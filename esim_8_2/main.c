#include <stdio.h>

int main()
{
    FILE *filep;
    char name[]="Teppo Testi3";
    int age=25;
    filep=fopen("c:/testaus/esim2.txt","a");
    if(filep){
        printf("nimi=%s ika=%d\n",name,age);
        fprintf(filep,"nimi=%s ika=%d\n",name,age);
        fputc('X',filep);
        fclose(filep);
    }
    else{
        printf("Tiedoston luonti ei onnistu\n");
    }
    return 0;
}
