/*
   Question:
   Write a C program to find the minimum number of characters 
   that need to be removed from a string so that it can be 
   rearranged into a palindrome.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[500];
    int f[26] = {0};
    int count = 0, i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            char c = tolower(str[i]);
            f[c - 'a']++;
        }
    }

    for (i = 0; i < 26; i++) {
        if (f[i] % 2 != 0)
            count++;
    }

    int res = (count == 0 ? 0 : count - 1);

    printf("No. of characters needed to be removed: %d\n", res);

    return 0;
}

