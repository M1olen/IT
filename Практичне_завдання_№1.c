#include <stdio.h>

int main() {
    int t1, t2, t3;
    float total_time;

    // Зчитую вхідні дані
    scanf("%d %d %d", &t1, &t2, &t3);

    // Обчислюю загальний час
    total_time = 1.0 / t1 + 1.0 / t2 + 1.0 / t3;

    // Вивожу результат з округленням до 2 знаків після коми
    printf("%.2f\n", 1.0 / total_time);

    return 0;
}
