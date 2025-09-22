#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPangram(char str[]) {
	int i;
    int seen[26] = {0};
    int count = 0;

    for ( i = 0; str[i]; i++) {
        if (isalpha(str[i])) {
            char c = tolower(str[i]);
            int index = c - 'a';
            if (!seen[index]) {
                seen[index] = 1;
                count++;
            }
        }
    }
    return (count == 26);
}

int main() {
    char str[500];

    printf("Enter a phrase: ");
    fgets(str, sizeof(str), stdin);

    if (isPangram(str))
        printf("The string is a Pangram.\n");
    else
        printf("The string is not a Pangram.\n");

    return 0;
}
