#include <stdio.h>
#include <math.h>

int main()
{
    //yhtälön ax2 +bc +c =0
    //ratkaisu saadaan ratkaisukaavalla
    //x=(-b +/- sqrt(b2-4ac)) / 2*a
    //diskriminantti on lauseke b2-4ac

    float a,b,c,d,x1,x2;
    printf("Anna kerroin a\n");
    scanf("%f",&a);
    printf("Anna kerroin b\n");
    scanf("%f",&b);
    printf("Anna vakio c\n");
    scanf("%f",&c);
    d=pow(b,2) - 4*a*c;
    if(d<0){
        printf("Yhtalolla ei ole ratkaisuja\n");
        return 0;
    }
    else if(d==0){
        x1=-b/(2*a);
        printf("Yhtalon ratkaisu on %.1f\n",x1);
    }
    else {
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
        printf("Yhtalon ratkaisut ovat %.1f ja %.1f\n",x1,x2);
    }
    return 0;
}
