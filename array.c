#include <stdio.h>

int main() {
    int anzahl_von_zahlen;
    printf("please enter the number of element:");
    scanf("%d", &anzahl_von_zahlen);
    float numbers[anzahl_von_zahlen];
    for (int i=0;i<anzahl_von_zahlen;i++){
        printf("enter the %d element:", i+1);
        scanf("%f", &numbers[i]);
    }
    for(int i=0;i<anzahl_von_zahlen;i++){
        printf("the %d element of the array has value : %.1f\n", i+1, numbers[i]);
    }
    float middle, summe;
    for(int i = 1; i <= anzahl_von_zahlen;i++) {
        summe += numbers[i];
    }
    
    printf("summe: %.1f\n", summe);
    printf("middle: %.1f\n", summe/anzahl_von_zahlen);
}