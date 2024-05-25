#include <stdio.h>
int main () {
    char symb = 'c';
    switch(symb) {

        case 'd':
            printf("number is 1\n");
            break;
        case 'c':
            printf("number is 65\n");
            break;
        default:
            printf("the value for number is not allowed\n");
    }
    return 0;
}