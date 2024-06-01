#include <stdio.h>

int main()
{

    char buffer[256];
    while (fgets(buffer, 256, stdin) != NULL)
    {
        fprintf(stdout, "%s", buffer); // stdout is FILE *
        fflush(stdout);                // sometimes necessary!
    }
    return 0;
}