#include <stdio.h>
int main()
{
    FILE *fp = fopen("input.txt", "r");
    char buffer[256];
    int line = 1;
    FILE *fpw = fopen("new_file.txt", "w+");
    while (fgets(buffer, 256, fp) != NULL)
    {
        fprintf(stdout, "%d: %s", line, buffer);
        line++;
    }
    fclose(fp);
}
