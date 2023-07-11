#include <stdio.h>

int countSequences(int n) {
    if (n == 1)
        return 2;
    if (n == 2)
        return 3;

    int a = 2;
    int b = 3;
    int count;

    for (int i = 3; i <= n; i++) {
        count = (a + b) % 12345;
        a = b;
        b = count;
    }

    return count;
}

int main() {
    int n;
    printf("Enter the length of sequences (1 < n < 10000): ");
    scanf("%d", &n);

    int result = countSequences(n);
    printf("The number of sequences of length %d without three consecutive ones is %d.", n, result);

    return 0;
}
