#include<stdio.h>
int main()
{
    int TM;
    scanf("%d",&TM);
    int H,M;
    H=TM/60;
    M=TM%60;
    printf("%d Hour(s) %d Minute(s)",H,M);
}