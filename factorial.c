#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int product;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    product = 1;
    for (int i = 1; i <= n; i++) {
        product*=i;
    }
    printf("Factorial of %d is %d\n", n, product);

    return 0;
}