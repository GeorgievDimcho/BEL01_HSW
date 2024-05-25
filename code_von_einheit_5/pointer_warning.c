#include <stdio.h>

int main()
{
    char var = 78; // Declaration of the character var
    int *var_p = &var;
    printf("char %c has int value %d. \n", var, var);
    printf("pointer to char %p\n", var_p);
    printf("pointer to char has value (derefferencing): %p\n", *var_p);
    printf("pointer to char has value (derefferencing): %d\n", *var_p<<);
    printf("pointer to char has value (derefferencing): %c\n", *var_p);
    return 0;
}