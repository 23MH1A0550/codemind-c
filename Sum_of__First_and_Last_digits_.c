#include<stdio.h>
int main()
{
    int N,a,b,sum;
    scanf("%d",&N);
    b=N%10;
    while(N>=10)
    {
        N/=10;
    }
    a=N;
    sum=a+b;
    printf("%d",sum);
    return 0;
}