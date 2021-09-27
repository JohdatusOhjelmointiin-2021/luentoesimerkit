#include <stdio.h>
#include <string.h>

int main()
{
    typedef struct Student_struct{
        int studentNumber;
        char fname[30];
        char lname[30];
    }
    student;

    student oamkStudents[100];
    int num=1;

    oamkStudents[1].studentNumber=1;
    strcpy(oamkStudents[1].fname,"Matti");
    strcpy(oamkStudents[1].lname,"Mainio");
    oamkStudents[2].studentNumber=2;
    strcpy(oamkStudents[2].fname,"Liisa");
    strcpy(oamkStudents[2].lname,"Virta");
    oamkStudents[3].studentNumber=3;
    strcpy(oamkStudents[3].fname,"Teppo");
    strcpy(oamkStudents[3].lname,"Testi");

//    for(int x=0; x<=2; x++){
//        printf("Anna opiskelijan etunimi\n");
//        scanf("%s",oamkStudents[x].fname);
//        printf("Anna opiskelijan sukunimi\n");
//        scanf("%s",oamkStudents[x].lname);
//        oamkStudents[x].studentNumber=x;
//    }
    printf("OPISKELIJAT\n");
    for(int x=1; x<=3; x++){
        printf("%d : %s %s\n",oamkStudents[x].studentNumber, oamkStudents[x].fname,oamkStudents[x].lname);
    }
    while(num !=999){
        printf("Anna etsittavan opiskelijan numero\n");
        scanf("%d",&num);
        printf("Opiskelijan nimi = %s %s\n",oamkStudents[num].fname, oamkStudents[num].lname);
    }

    return 0;
}
