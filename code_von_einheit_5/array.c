#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    // password validator
    // mind. länge 5
    // mind. 1 zahl
    // mind. 1 Großbuchstabe
    // mind. 1 kleinbuchstabe
    // es darf nicht das Qwerty1 sein
    char pass[255];
    bool lenght, zahl, grBuchstabe, kBu, notSimple;
    //    printf("value of len: %B", lenght);
    int len_of_pass;
    do
    {
        printf("min. 5 symbols, min. 1 number, min. 1 capital letter, min 1 kleie B, pass != \"Qwerty1\": \n");
        printf("please enter a password: ");
        scanf("%s", pass);
        len_of_pass = strlen(pass);
        // printf("length: %d\n", strlen(pass));
        if (len_of_pass < 5)
        {
            lenght = false;
        }
        else
        {
            lenght = true;
        }
        // zahlen zwi 48 und 57
        for (int i = 0; i < len_of_pass; i++)
        {
            // printf("ascii value of %c is: %d \n", pass[i], pass[i]);
            if (pass[i] >= 48 && pass[i] <= 57)
            { // der character der wir jetzt gerade haben
                zahl = true;
                break;
            }
            else
            {
                zahl = false;
            }
        }
        // grBuch zwi 65 - 90
        for (int i = 0; i < len_of_pass; i++)
        {
            // printf("ascii value of %c is: %d \n", pass[i], pass[i]);
            if (pass[i] >= 65 && pass[i] <= 90)
            { // der character der wir jetzt gerade haben
                grBuchstabe = true;
                break;
            }
            else
            {
                grBuchstabe = false;
            }
        }
        // kleine B 97 - 122
        for (int i = 0; i < len_of_pass; i++)
        {
            // printf("ascii value of %c is: %d \n", pass[i], pass[i]);
            if (pass[i] >= 97 && pass[i] <= 122)
            { // der character der wir jetzt gerade haben
                kBu = true;
                break;
            }
            else
            {
                kBu = false;
            }
        }
        if (strcmp(pass,"Qwerty1")) // strcmp -> 0 wenn gleich
        {
            notSimple = true;
        }
        else
        {
            notSimple = false;
        }

        if (!zahl)
        {
            printf("zahl fehlt\n");
        }
        if (!grBuchstabe)
        {
            printf("grBuchstabe fehlt\n");
        }
        if (!lenght)
        {
            printf("passwort zu kurz (min 5)\n");
        }
        if (!kBu)
        {
            printf("passwort hat keine kleine Buchs..\n");
        }
        if (!notSimple)
        {
            printf("passwort is easy to guess \n");
        }
    } while (!lenght || !zahl || !grBuchstabe || !kBu || !notSimple);
    return 0;
}