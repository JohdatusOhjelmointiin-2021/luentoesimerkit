#include <stdio.h>
int factorial(int n);
float binomi(int n, int k);

int main()
{
    int n,k;
    float binomikerroin;
    printf("Anna luku n\n");
    scanf("%d",&n);
    printf("Anna luku k\n");
    scanf("%d",&k);
    if(n>0 && k>0 && k<=n){
        binomikerroin=binomi(n,k);
        printf("%d yli %d:n = %.1f\n",n,k,binomikerroin);
    }
    else {
        printf("Luvut eivat tayta vaatimuksia\n");
    }
    return 0;
}

int factorial(int n){
    int tulo=1;
    for(int x=1; x<=n; x++){
        tulo=tulo*x;
    }
    return tulo;
}
float binomi(int n, int k){
    float tulos;
    tulos=factorial(n)/(factorial(k)*factorial(n-k));
    return tulos;
}
