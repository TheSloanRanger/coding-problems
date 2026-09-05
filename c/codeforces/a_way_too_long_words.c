// Author: Ben Sloan

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    char n[1000];
    fgets(n, sizeof(n), stdin);
    int num = atoi(n);

    for (int x = 0; x < num; x++) {
        char word[120];

        fgets(word, sizeof(word), stdin);
        int length = strlen(word) - 1;

        if (length <= 10)
        {
            printf("%s", word);
        }

        else {
            for (int c = 0; c < length; c++) {
                if (c == 0) {
                    printf("%c", word[c]);
                }

                else if (c == length - 1) {
                    printf("%d%c", length-2, word[c]);
                }

            }
            printf("\n");
        }
    }
}
