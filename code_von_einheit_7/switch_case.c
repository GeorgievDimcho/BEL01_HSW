#include <stdio.h>

int main()
{
    printf("choose 1 for printing, 2 for inserting, 3 for exit\n");
    int a = 0;
    int b;
    scanf("%d", &a);
    // case 1
    switch (a)
    {
    case 1:
        /* code */
        printf("gdg\n");
        break;
    case 2:
        printf("this is case 2\n");
        scanf("%d", &b);
        break; // break auslassen
    case 3:
        return 0;
    default:
        printf("wrong input, please try again.\n");
        break;
    }
    
    if(a>0) {

    }
    return 0;
}