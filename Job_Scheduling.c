#include <stdio.h>

void jobScheduling(int start[], int finish[], int n) {
    printf("Selected jobs: \n");

    int i = 0;
    printf("Job %d\n", i);

    for (int j = 1; j < n; j++) {
        if (start[j] >= finish[i]) {
            printf("Job %d\n", j);
            i = j;
        }
    }
}

int main() {
    int start[] = {1, 3, 0, 5, 8, 5};
    int finish[] = {2, 4, 6, 7, 9, 9};
    int n = sizeof(start) / sizeof(start[0]);

    jobScheduling(start, finish, n);
    return 0;
}
