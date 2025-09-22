#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int l = 0, r, t;

    printf("Enter Name: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    r = strlen(str) - 1;
    while (l < r) {
        t = str[l];
        str[l] = str[r];
        str[r] = t;
        l++;
        r--;
    }

    printf("%s", str);
    return 0;
}

