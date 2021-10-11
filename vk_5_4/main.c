#include <stdio.h>

int main()
{
    typedef struct studentStruct{
        int id;
        char name[50];
        int age;
    } Student;

    Student students[5];
    for(int x=0; x<=2; x++){
        printf("Anna %d. opiskelijan id\n",x+1);
        scanf("%d",&students[x].id);
        printf("Anna %d. opiskelijan nimi\n",x+1);
        fflush(stdin);
        gets(students[x].name);
        printf("Anna %d. opiskelijan ika\n",x+1);
        scanf("%d",&students[x].age);
    }

    for(int x=0; x<=2; x++){
        printf("%d,",students[x].id);
        printf("%s,",students[x].name);
        printf("%d\n",students[x].age);
    }
    return 0;
}
