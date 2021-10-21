#include <stdio.h>

int main()
{
    typedef struct StudentStruct{
        int id;
        char name[50];
        int age;
    } Student;

    Student students[5];

    FILE *myPointer;
    myPointer=fopen("C:/temp/students.txt","w");

    if(myPointer == NULL){
        printf("Tiedostoon ei voi kirjoittaa\n ");
        return 0;
    }

    for(int x=0; x<=4; x++){
        printf("Anna %d. opiskelijan id\n",x+1);
        scanf("%d",&students[x].id);

        fflush(stdin);
        printf("Anna %d. opiskelijan nimi\n",x+1);
        gets(students[x].name);

        printf("Anna %d. opiskelijan ika\n",x+1);
        scanf("%d",&students[x].age);
    }
    printf("OPISKELIJAT\n");
    for(int x=0; x<=4; x++){
        printf("%d : ",students[x].id);
        printf("%s : ",students[x].name);
        printf("%d \n",students[x].age);

        fprintf(myPointer,"%d : ",students[x].id);
        fprintf(myPointer,"%s : ",students[x].name);
        fprintf(myPointer,"%d \n",students[x].age);
    }
    fclose(myPointer);
    return 0;
}
