#include <stdio.h>

int main() {
    float num[100];
    int i = 0;
    while (1)
    {
        printf("\nenter number:");
        scanf("%f", &num[i]);
        if(num[i]==0) break;
        i++;
    }
    
    return 0;
}