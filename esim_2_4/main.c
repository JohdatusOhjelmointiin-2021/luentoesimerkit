#include <stdio.h>
#include <stdbool.h>

int main()
{
    int test=5;
    int secondTest=9;
    bool myTest=true;
    if(myTest){
        printf("myTest sai arvon tosi\n");
    }
    else{
        printf("myTest sai arvon false\n");
    }

    if(!myTest){
        printf("2: myTest ei saanut arvoa tosi\n");
    }
    else{
        printf("2: myTest sai arvon tosi\n");
    }
    printf("Before the test\n");
    // merkintä || on TAI eli OR
    // merkintä && on JA eli AND

    if(test == 5 || secondTest==10){
        printf("This is the first thing to do if test=5\n");
        printf("This is the second thing to do if test=5\n");
    }
    printf("After the test\n");
    printf("The value is %d\n",test);

    return 0;
}
