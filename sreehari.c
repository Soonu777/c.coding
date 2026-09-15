#include <stdio.h>

int main() {
    int a, b, c,sum;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c)
        printf("%d is the largest", a);
    else if (b >= a && b >= c)
        printf("%d is the largest", b);
    else
        printf("%d is the largest", c);
    sum=a+b+c;
    printf("sum of three numbers : %d",sum);
    
    return 0;
}
