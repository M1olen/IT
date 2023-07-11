#include <stdio.h>
#include <math.h>

int calculateIntersectionPoints(int x1, int y1, int r1, int x2, int y2, int r2) {
    double distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    
    // Визначення типу відношення між колами за відстанню та радіусами
    if (distance > r1 + r2) {
        // Кола зовсім не перетинаються
        return 0;
    } else if (distance < fabs(r1 - r2)) {
        // Одне коло знаходиться всередині іншого
        return 0;
    } else if (distance == 0 && r1 == r2) {
        // Кола ідентичні, безкінечно багато точок перетину
        return -1;
    } else if (distance == r1 + r2 || distance == fabs(r1 - r2)) {
        // Одна точка перетину
        return 1;
    } else {
        // Два точки перетину
        return 2;
    }
}

int main() {
    int x1, y1, r1, x2, y2, r2;
    printf("Enter the coordinates and radii of the two circles (x1, y1, r1, x2, y2, r2): ");
    scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);

    int result = calculateIntersectionPoints(x1, y1, r1, x2, y2, r2);
    
    if (result == -1) {
        printf("The circles have infinitely many intersection points.");
    } else {
        printf("The number of intersection points between the circles is %d.", result);
    }

    return 0;
}
