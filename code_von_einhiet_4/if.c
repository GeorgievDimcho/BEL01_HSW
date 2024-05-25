#include <stdio.h>

int return_greater_number(int a, int b) {
    return (a>b) ? a:b;
    /* if(a>b) {
        return a;
    } else {
        return b;
    } */
}

int main() {
    int zahl1, zahl2, greater_number;
    printf("enter two integer numbers: ");
    scanf("%d%d", &zahl1, &zahl2);
    greater_number = return_greater_number(zahl1, zahl2);
    printf("The greater number is: %d\n", greater_number);
    return 0;
}