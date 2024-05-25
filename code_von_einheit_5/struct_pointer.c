#include <stdio.h>

typedef struct
{
    int id;
    char description[50];
    float price;
    char name[50];
} Item;

int main()
{
    Item Apple, *Ware_p;
    Apple.id = 1;
    //Apple.description = "I am an apple.";
    Apple.price = 3.5;
    //Apple.name = "apple";
    Ware_p = &Apple;
    int id = Ware_p->id;
    float price = Ware_p->price;
    float price2 = (*Ware_p).price;
    printf("price: %f, price2: %f\n", price, price2);
    //*(Ware_p)->price = Ware_p->price + 1;
    printf("price: %f, price2: %f", price, price2);
}
