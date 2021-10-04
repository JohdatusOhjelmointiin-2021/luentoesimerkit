#include <stdio.h>

int main()
{
    FILE *myfile;
    int num=0;
    myfile=fopen("C:/QtProjects/tvt21spo/esim_8_1/esim1.txt","r");
    if(myfile){
        printf("Tiedostosta lukeminen!\n");
        //scanf("%d",&num);
        fscanf(myfile,"%d",&num);
        printf("Eka luku on %d\n",num);

        fscanf(myfile,"%d",&num);
        printf("Toka luku on %d\n",num);

        fclose(myfile);
    }
    else {
        printf("Tiedostoa ei loydy\n");
    }

    return 0;
}
