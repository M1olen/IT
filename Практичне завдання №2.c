#include <stdio.h>

// Функція для знаходження найбільшого спільного дільника (НСД) двох чисел
int findGCD(int a, int b) {
    if (b == 0)
        return a;
    return findGCD(b, a % b);
}

// Функція для знаходження найменшого спільного кратного (НСК) двох чисел
int findLCM(int a, int b) {
    return (a * b) / findGCD(a, b);
}

int main() {
    int n;
    printf("Enter the count of numbers (n): ");
    scanf("%d", &n);

    int numbers[n];
    printf("Enter %d natural numbers separated by space: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    int lcm = numbers[0];
    for (int i = 1; i < n; i++) {
        lcm = findLCM(lcm, numbers[i]);
    }

    printf("The least common multiple (LCM) of the given numbers is %d.", lcm);

    return 0;
}
