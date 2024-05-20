#include <stdio.h>

int main() {
    int x = 6;
    while (x>1){
        x--;
        if(x==3) continue;
       /*  if(x==3) 
            break; */
        printf("%d\n", x);
    }
}