#include <stdio.h>

int main()
{
    int choice=1;//jokin muu kuin 9
//    while(choice !=9){
//        printf("1. Nelion kehan pituus\n");
//        printf("2. Ympyran kehan pituus\n");
//        printf("9. Lopetus\n");
//        scanf("%d",&choice);
//        if(choice==1){
//            printf("Valittu Nelion kehan pituus\n");
//        }
//        else if (choice==2) {
//            printf("Valittu Ympyran kehan pituus\n");
//        }
//        else if (choice==9) {
//            printf("LOPPU\n");
//        }
//    }

    //toinen versio
    while(1){
        printf("1. Nelion kehan pituus\n");
        printf("2. Ympyran kehan pituus\n");
        printf("9. Lopetus\n");
        scanf("%d",&choice);
        if(choice==1){
            printf("Valittu Nelion kehan pituus\n");
        }
        else if (choice==2) {
            printf("Valittu Ympyran kehan pituus\n");
        }
        else if (choice==9) {
            printf("LOPPU\n");
            break;
        }
    }
    return 0;
}
