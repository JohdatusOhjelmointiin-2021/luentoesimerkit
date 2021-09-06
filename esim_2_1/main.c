#include <stdio.h>

int main()
{
    int myTable[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    printf("Taulukon 1. rivin luku on %d\n",myTable[0][2]);
    printf("Taulukon 2. rivin luku on %d\n",myTable[1][1]);
    printf("Taulukon 3. rivin luku on %d\n",myTable[2][0]);
    return 0;
}
