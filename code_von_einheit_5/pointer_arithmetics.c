#include <stdio.h>

int main() {
    int array[100];
    int *array_first_element = array; // array -> &array[0]
    *array_first_element = 5;
    *(array_first_element+10) = 40;
    //for(int i = 0; i < 5; i=i+5) {
    //    printf("array[%d]: %d\n", i, array[array_first_element+i]);
    //}
    printf("arr[11]: %d\n", *(array_first_element+10));
    return 0;
}