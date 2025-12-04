#include <stdio.h>

int main() {
    int n, i, count = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    int marks[n];

    // Input marks
    printf("Enter the marks of %d students:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
    }

    // Scan for score = 99
    printf("\nStudents who scored 99 are at indices: ");
    for (i = 0; i < n; i++) {
        if (marks[i] == 99) {
            printf("%d ", i);   // print student index
            count++;            // increase count
        }
    }

    if (count == 0) {
        printf("\nNo student scored 99.\n");
    } else {
        printf("\nTotal students who scored 99 = %d\n", count);
    }

    return 0;
}
