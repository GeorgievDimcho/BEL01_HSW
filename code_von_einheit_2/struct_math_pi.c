#include "stdio.h"
#include "limits.h"
#include "stdint.h"
#include <math.h>
// Shift+Ctrl+A comment
// runden float
// return code von funktion holen
//  signed int = -1
// dinamic array element count
// pointer consta überschreiben
// volatile
// restrict
// + - binary
// % devide

int return_func()
{
    return 80;
}

int main(void)
{
    struct birthday {
        int day;
        int month;
        int year;
        union he_we
        {
            
        };
        
    }Birthday;
    Birthday.day=5;
    Birthday.month=12;
    Birthday.year=2022;
    printf("day.month.year: %d.%d.%d\n",Birthday.day,Birthday.month,Birthday.year);

   /*  int zahl1 = 6;
    int zahl2;
    printf("zahl2++:%d\n",zahl1++);
    printf("++zahl2:%d\n",++zahl1);
    int zähler=0;
    int b = 23;
    //printf("24 mod 5:%d", 24%5);
    for(int i=2;i<b;i++) {
        if(b%i==0){
            printf("%d wird durch %d ohne rest deividiert.\n", b,i);
            zähler++;
        }
    }
    if(zähler){
        printf("Nicht prime");
    } */
    //b = b & 6;
    // 0001 1000 : 24
    // &
    // 0000 0110 : 6
    // 0000 0000
/* 
    int num = -8;   // Binary: 1111 1000
                        //+8   0000 1000
    num = num >> 1; */ // Right shift by 1 bit
    // After right shift: Binary: 0000 0100, Decimal: 4
    // After right shift: Binary: 1111 1100, Decimal: -4
    /* char x = "o";
    int8_t y = (int8_t ) x; //s 1000 0000
    int d = (int) x;
    printf("neue y is %c\n", y); // x is 0
    printf("neue d is %d\n", d); // x is 0
     */
    /* float num = 3.14159;
    float rounded_num = floorf(num * 100) / 100; // Abrunden auf zwei Nachkommastellen
    printf("Rounded number: %.2f\n", rounded_num);
    return 0; */
    // double d = 3.14; int PI_IS_THREE = (int) d;
    //
    /* unsigned int num = 8;  // Binary representation: 0000 1000
    num = num << 2;  */
    // Left shift by 2 bits
    // After left shift, num = 32 (Binary representation: 0010 0000)
    // volatile int sensor_reading;
    // The variable sensor_reading might be updated by hardware interrupts
}
