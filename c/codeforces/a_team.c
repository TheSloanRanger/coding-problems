#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char c[100];
    fgets(c, sizeof(c), stdin);
    int n = atoi(c);

    int problem_count = 0;

    for (int x = 0; x < n; x++)
    {
        char line[100];
        fgets(line, sizeof(line), stdin);

        int sure_count = 0;

        for (int y = 0; y < strlen(line); y++)
        {
            if (line[y] == '1')
            {
                sure_count++;
            }
        }

        if (sure_count >= 2)
        {
            problem_count++;
        }
    }

    printf("%d", problem_count);
}
