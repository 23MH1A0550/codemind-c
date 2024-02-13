#include<stdio.h>
int main()
{
    int i, r,sum=0;
    scanf("%d",&r);
    while(r>0)
    {
        i=r%10;
        sum=sum+i;
        r=r/10;
    }
    printf("%d",sum);
    
    
    return 0;
}