#include <stdio.h>

int main() {
    int num1, num2;
scanf("%d %d", &num1, &num2);
    if (num1 > num2) {
        printf("%d is the biggest.
", num1);
    } else if (num2 > num1) {
        printf("%d
", num2);
    } else {
        printf("Both numbers are equal.
");
    }
    
    return 0;
}