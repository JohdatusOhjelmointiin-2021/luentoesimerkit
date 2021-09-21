#include <stdio.h>
int laskeMerkit(char *mjono);

//tehdään funktio, joka laskee montako merkkiä
//on merkkitaulukossa
int main()
{
    char lause[30];
    int pituus;
    printf("Kirjoita lause (max. 30 merkkia)\n");
    fflush(stdin);
    gets(lause);
    pituus=laskeMerkit(lause);
    printf("Annetussa lauseessa on %d merkkia\n",pituus);
    return 0;
}

int laskeMerkit(char *mjono){
    int lkm=0;
    while(mjono[lkm] != '\0'){
        lkm++;
    }
    return lkm;
}
