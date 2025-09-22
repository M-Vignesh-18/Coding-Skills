#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isAnagram(char s1[], char s2[]) {
    int count[256] = {0};
    int i;

    if (strlen(s1) != strlen(s2))
        return 0;

    for (i = 0; s1[i]; i++) {
        count[tolower(s1[i])]++;
        count[tolower(s2[i])]--;
    }

    for (i = 0; i < 256; i++) {
        if (count[i] != 0)
            return 0;
    }
    return 1;
}

int main() {
    char str1[100], str2[100];
    printf("Enter string 1: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter string 2: ");
    fgets(str2, sizeof(str2), stdin);

    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    if (isAnagram(str1, str2))
        printf("Anagram\n");
    else
        printf("Not Anagram\n");

    return 0;
}

