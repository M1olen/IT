#include <stdio.h>

// Функція для підрахунку кількості чисел із р розрядів, використовуючи цифри 5 та 9
long long countNumbers(int r) {
    if (r == 1)
        return 2;

    long long dp[r + 1];
    dp[1] = 2; // Кількість 1-розрядних чисел (2 можливі варіанти: 5 та 9)
    dp[2] = 3; // Кількість 2-розрядних чисел (3 можливі варіанти: 55, 59, 95)

    for (int i = 3; i <= r; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    return dp[r];
}

int main() {
    int r;
    printf("Enter the number of digits (r): ");
    scanf("%d", &r);

    long long result = countNumbers(r);
    printf("The number of %d-digit numbers that can be formed using digits 5 and 9 without three consecutive same digits is %lld.", r, result);

    return 0;
}
