#include <stdio.h>
#include <stdlib.h>

int main()
{
    char n[5];
    fgets(n, sizeof(n), stdin);
    int x = atoi(n);

    int total = 0;

    for (int i = 0; i < x; i++)
    {
        char line[10];
        fgets(line, sizeof(line), stdin);

        if (line[0] == '+' || line[2] == '+')
        {
            total++;
        }

        if (line[0] == '-' || line[2] == '-')
        {
            total--;
        }
    }

    printf("%d", total);
}
