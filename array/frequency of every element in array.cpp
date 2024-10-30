#include <stdio.h>

int main() {
    int x[5] = {1, 2, 1, 2, 1};
    int visited[5] = {0}; // Initialize visited array

    printf("Array X: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", x[i]);
    }
    printf("\n\n");

    for (int i = 0; i < 5; i++) {
        if (visited[i] == 0) {
            int count = 1;
            for (int j = i + 1; j < 5; j++) {
                if (x[i] == x[j]) {
                    count++;
                    visited[j] = 1;
                }
            }
            printf("%d occurs %d times\n", x[i], count);
        }
    }

    return 0;
}