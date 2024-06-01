#include <stdio.h>

int main()
{
    float array2d[3][3];
    for (int i = 0; i <= 2; i++)
    { // zeilen
        for (int j = 0; j <= 2; j++)
        { // spalten
            printf("enter a float number array2d[%d][%d]: ", i, j);
            scanf("%f", &array2d[i][j]);
        }
    }
    for (int i = 0; i <= 2; i++)
    { // zeilen
        for (int j = 0; j <= 2; j++)
        { // spalten
            printf("%f, ", array2d[i][j]);
        }
        // zeilen umbruch
        printf("\n");
    }
    float summe;
    for (int i = 0; i <= 2; i++)
    { // zeilen
        for (int j = 0; j <= 2; j++)
        { // spalten
            if (i == j)
            {
                summe += array2d[i][j];
                // summe = summe + array2d[i][j];
            }
        }
    }
    float array1d[2];
    printf("summe: %.2f", summe);
    int c=0;
    float summe1;
    for (int i = 0; i <= 2; i++)
    { // zeilen
        for (int j = 0; j <= 2; j++)
        { // spalten
            summe1+= array2d[i][j];
        }
        // zeilen umbruch
        array1d[c] = summe1;
        summe1=0;
        c++;
    }
    for(int i=0;i <= 2;i++) {
        printf("summer für zeile %d: %f\n", i, array1d[i]);
    }
    return 0;
}