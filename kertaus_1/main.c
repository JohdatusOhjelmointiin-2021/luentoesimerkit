#include <stdio.h>

int main()
{
    float brutto, netto, vero;
    printf("Anna bruttotulosi\n");
    scanf("%f",&brutto);
    if(brutto < 0){
        printf("Tulo ei voi olla negatiivinen\n");
        return 0;
    }
    else if(brutto < 18100){
        vero=0;
    }
    else if(brutto < 27200){
        vero=8 + 0.06*(brutto-18100);
    }
    else if (brutto < 44800) {
        vero=554 + 0.1725*(brutto-27200);
    }
    else if (brutto < 78500) {
        vero=3590 + 0.2125*(brutto-44800);
    }
    else {
        vero=10751.25 + 0.3125*(brutto-78500);
    }
    printf("valtionveroa menee %.2f\n",vero);
// Testitapauksia
//    20000	122
//    30000	1037
//    50000	4695
//    80000	11220

    return 0;
}
