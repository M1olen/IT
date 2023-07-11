#include <stdio.h>

int main() {
    int t1, t2, t3;
    printf("Enter the time taken by the first guest to eat the cake (in hours): ");
    scanf("%d", &t1);
    printf("Enter the time taken by the second guest to eat the cake (in hours): ");
    scanf("%d", &t2);
    printf("Enter the time taken by the third guest to eat the cake (in hours): ");
    scanf("%d", &t3);

    float total_time = 1 / ((1.0 / t1) + (1.0 / t2) + (1.0 / t3));
    printf("The guests can eat the cake together in %.2f hours.", total_time);

    return 0;
}
