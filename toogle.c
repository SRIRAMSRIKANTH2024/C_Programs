#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main() {
    char s[101], arr[101];
    scanf("%s", s);

    int i = 0, k = 0;

    while (s[i] != '\0') {
        if (islower(s[i])) {
            int start = i;
            while (islower(s[i])) i++;
            int len = i - start;

            if (len > 2) {
                for (int j = start; j < start + len; j++) {
                    arr[k++] = toupper(s[j]);
                }
            } else {
                for (int j = start; j < start + len; j++) {
                    arr[k++] = s[j];
                }
            }
        } else if (isupper(s[i])) {
            int start = i;
            while (isupper(s[i])) i++;
            int len = i - start;

            if (len > 2) {
                for (int j = start; j < start + len; j++) {
                    arr[k++] = tolower(s[j]);
                }
            } else {
                for (int j = start; j < start + len; j++) {
                    arr[k++] = s[j];
                }
            }
        } else {
            arr[k++] = s[i++];
        }
    }

    arr[k] = '\0';

    // Print the result with space between characters
    for (int y = 0; arr[y] != '\0'; y++) {
        printf("%c", arr[y]);
    }

    return 0;
}

