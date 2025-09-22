#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, j, m;
    int *a;

    printf("Enter size: ");
    scanf("%d", &n);

    a = (int *)malloc(n * sizeof(int));
    if (a == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("Enter element: ");
        scanf("%d", (a + i));
    }

    printf("Array elements:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", *(a + i));
    }
    printf("\n");

    printf("Enter new size: ");
    scanf("%d", &m);

    a = (int *)realloc(a, m * sizeof(int));
    if (a == NULL) {
        printf("Memory reallocation failed\n");
        return 1;
    }

    if (m > n) {
        for (j = n; j < m; j++) {
            printf("Enter element: ");
            scanf("%d", (a + j));
        }
    }

    printf("Final array elements:\n");
    for (i = 0; i < m; i++) {   
        printf("%d ", *(a + i));
    }
    printf("\n");

    free(a);
    return 0;
}

