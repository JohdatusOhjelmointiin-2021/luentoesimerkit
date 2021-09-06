#include <stdio.h>

int main()
{
    char name[50];
    int age;
    printf("Kuinka vanha olet\n");
    scanf("%d",&age);
    printf("Kerro nimesi\n");
    //scanf("%s",&name);
    fflush(stdin);
    gets(name);
    if(age<20){
        printf("Tervehdys nuori %s\n",name);
        printf("Testi 1\n");
    }
    else {
        printf("Tervehdys vanhempi %s\n",name);
        printf("Testi 2\n");
    }
    printf("Testi 3\n");


    return 0;
}
