#include <stdio.h>

int main() {
    int x, y;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of y: ");
    scanf("%d", &y);

    if (x > 0 && y > 0) {
        printf("The point (%d, %d) lies in Quadrant I.\n", x, y);
    }
    else if (x < 0 && y > 0) {
        printf("The point (%d, %d) lies in Quadrant II.\n", x, y);
    }
    else if (x < 0 && y < 0) {
        printf("The point (%d, %d) lies in Quadrant III.\n", x, y);
    }
    else if (x > 0 && y < 0) {
        printf("The point (%d, %d) lies in Quadrant IV.\n", x, y);
    }
    else if (x == 0 && y == 0) {
        printf("The point (%d, %d) lies at the Origin.\n", x, y);
    }
    else if (x == 0) {
        printf("The point (%d, %d) lies on the Y-axis.\n", x, y);
    }
    else if (y == 0) {
        printf("The point (%d, %d) lies on the X-axis.\n", x, y);
    }

    return 0;
}
