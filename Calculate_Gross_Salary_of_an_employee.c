#include<stdio.h>
int main()
{
    float BS,HRA,DA,PF,GS;
    scanf("%f%f%f",&BS,&HRA,&DA);
    PF=0.12*BS;
    GS=BS+HRA+DA+PF;
    printf("%.2f
",PF);
    printf("%.2f",GS);
}