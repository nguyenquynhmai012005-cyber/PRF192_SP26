#include <stdio.h>

int sumOfDivisors(int n) {
    int sum = 0;
    int i;

    for(i = 1; i <= n; i++) {
        if(n % i == 0) {
            sum += i;
        }
    }
    
    return sum;
}
int main() {
    int n;
    
    printf("Enter n: ");
    scanf("%d", &n);

    if(n <= 0) {
        printf("n must be positive.\n");
    } else {
        printf("Sum of divisors of %d is: %d\n", n, sumOfDivisors(n));
    }
    
    return 0;
}