#include <stdio.h>
int main()
{
    int a;
    do
    {
        printf("please enter a number between 5 an 10: ");

        scanf("%d", &a);
    } while (a < 5 || a > 10);
    printf("a=%d\n", a);
    int A[5][5];
    for (int i = 0; i < 5; i = i + 1)
    {
        for (int j = 0; j < 5; j = j + 1)
        {
            A[i][j] = i+j;
            printf("A[%d][%d]=%d, ", i, j, A[i][j]);
        }
        printf("\n");
    }
    return 0;
}