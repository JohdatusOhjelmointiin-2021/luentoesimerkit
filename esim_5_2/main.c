#include <stdio.h>
void calculateSum(int a, int b);
void calculateProj(int a, int b);
void calculateDiv(int a, int b);
void choose(int num1, int num2);

int main()
{
    int x,y;
    printf("Anna kaksi kokonaislukua pilkulla erotettuina\n");
    scanf("%d,%d",&x,&y);
    choose(x,y);
    return 0;
}

void calculateSum(int a, int b){
    printf("Lukujen %d ja %d summa on %d\n",a,b,a+b);
}

void calculateProj(int a, int b){
    printf("Lukujen %d ja %d tulo on %d\n",a,b,a*b);
}

void calculateDiv(int a, int b){
    printf("Lukujen %d ja %d osamaara on %f\n",a,b,(float)a/(float)b);
}

void choose(int num1, int num2){
    char value;
    printf("Valitse laskutoimitus\n");
    printf("1 = Yhteenlasku\n");
    printf("2 = Kertolasku\n");
    printf("3 = Jakolasku\n");
    printf("9 = LOPETA\n");
    fflush(stdin);
    //scanf("%c",&value);
    //getch lukee merkin ilman enterin painallusta
    value=getch();
    if(value=='1'){
        calculateSum(num1,num2);
        choose(num1,num2);
    }
    else if(value=='2'){
        calculateProj(num1, num2);
        choose(num1,num2);
    }
    else if(value=='3'){
        calculateDiv(num1,num2);
        choose(num1,num2);
    }
    else if(value=='9'){
        printf("Kiitos ja nakemiin\n");
    }
    else {
        printf("Sallitut valinnat ovat 1,2,3\n");
        choose(num1,num2);
    }
}
