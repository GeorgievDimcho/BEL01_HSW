#include <stdio.h>

int main() {
    int num;
    printf("enter a number:");
    scanf("%d", &num);
    int zähler=0;
    for (counter = 1; counter < SHRT_MAX; counter ++){
        for (int i = 2; i <= num-1; i++)
        {
            if(num%i==0) {
                zähler++;
                break;
            }
        }
    }
    
    printf("zähler: %d", zähler);
    if(zähler == 0) 
        printf("the number %d is prime.\n", num);
    else
        printf("the number %d is not prime.\n", num);
     
    
    return 0;
}