#include <stdio.h>

int countDivisors(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == n / i) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    printf("Enter a natural number (1 < n < 150): ");
    scanf("%d", &n);

    int result = countDivisors(n);
    printf("The number of equal divisors of %d is %d.", n, result);

    return 0;
}
