#include <stdio.h>
int main()
{
    int n;
    float sum = 0.0;
    int i =1;
    scanf("%d", &n);
    while (i <= n)
    {
        sum += 1.0 / i;
        i++;
    }
    printf("%.2f
",sum);
    return 0;
}