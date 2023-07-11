#include <stdio.h>

int calculateMinSteps(int x, int y) {
    int steps = 0;
    while (y > x) {
        if (y % 2 == 0) {
            y /= 2;
        } else {
            y++;
        }
        steps++;
    }
    steps += x - y;
    return steps;
}

int main() {
    int x, y;
    printf("Enter the starting point x: ");
    scanf("%d", &x);
    printf("Enter the ending point y: ");
    scanf("%d", &y);

    int result = calculateMinSteps(x, y);
    printf("The minimum number of steps required to go from %d to %d is %d.", x, y, result);

    return 0;
}
