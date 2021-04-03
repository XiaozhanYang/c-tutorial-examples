#include <stdio.h>

const int MAX = 4;

int main ()
{
    char names[4][8] = {
        "Zara Ali",
        "Hina Ali",
        "Nuha Ali",
        "Sara Ali"
    };

    char string[] = "This is a string";

    int i = 0;

    for (i=0; i < MAX; i++) 
    {
        printf("Value of names[%d] = %c\n", i, names[i][3] );
        printf("Value of string[%d] = %c\n", i, string[i]);
    }
    return 0;
}