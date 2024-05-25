#include <stdio.h>

int main() {

    int var1 = 0b01101010;
    int var2 = 0b10001001;
    int var3 = var1 ^ var2;
    int count1, count0;
    printf("var3: %b", var3);
    while (var3)
    {
        if (var3 & 1 == 1) {
            count1++;
        } else {
            count0++; 
        }
        var3 = var3 >> 1;
    }
    printf("the count of 0s is %d, and of 1s is %d\n", count0, count1);
    
    return 0;
}