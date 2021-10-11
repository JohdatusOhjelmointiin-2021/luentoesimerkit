#include <stdio.h>

int main()
{
    FILE *sourceFile;
    FILE *targetFile;
    char merkki;
    sourceFile=fopen("C:/QtProjects/tvt21spo/vk_5_2/source.txt","r");
    targetFile=fopen("C:/QtProjects/tvt21spo/vk_5_2/target.txt","w");
    if(sourceFile){
        if(!targetFile){
            printf("kohdetiedostoon ei voi kirjoittaa");
            return 0;
        }
        printf("Tiedoston sisalto\n");
        while( (merkki = fgetc(sourceFile)) !=EOF){
            printf("%c",merkki);
            if(merkki==','){
                fprintf(targetFile,";");
            }
            else{
                fprintf(targetFile,"%c",merkki);
            }

        }
        fclose(sourceFile);
        fclose(targetFile);
    }
    else {
        printf("Tiedostoa ei voitu avata\n");
    }
    return 0;
}
