#include <stdio.h>

int main()
{
        int test;
        printf("Anna kokonaisluku \n");
        scanf("%d",&test);
        //luokittelu
        //alle 5
        //5-10
        //10-15
        //yli 15
        if(test < 5){
            printf("Alle 5\n");
        }
        else if(test < 10){
            printf("5-10\n");
        }
        else if(test < 15){
            printf("10-15\n");
        }
        else{
            printf("yli 15\n");
        }

        //TESTI 3
//        if(test>10 && test<20){
//            printf("Luku on valilla 10 ja 20\n");
//        }
//        else{
//            printf("Ei ollut valilla 10 ja 20\n");
//        }

        //TESTI 1
//        if (test==1) {
//            printf("Option A\n");
//        }
//        else if(test==2){
//            printf("Option B\n");
//        }
//        else if(test==3){
//            printf("Option C\n");
//        }
//        else {
//            printf("Option D\n");
//        }

        //TESTI 2
//        switch (test) {
//            case 1:{
//              printf("Option A\n");
//              break;
//            }
//            case 2:{
//              printf("Option B\n");
//              break;
//            }
//            case 3:{
//              printf("Option C\n");
//              break;
//            }
//            default:{
//              printf("Option D\n");
//              break;
//            }
//        }

        return 0;
}
