#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n, i, j;
    int *p;

    printf("Enter no. of rows: ");
    scanf("%d", &m);

    printf("Enter no. of columns: ");
    scanf("%d", &n);

    p = (int*)malloc(m * n * sizeof(int));
    if (p == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", (p + i * n + j));
        }
    }

    printf("\nMatrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", *(p + i * n + j));
        }
        printf("\n");
    }

    free(p); 
    return 0;
}

