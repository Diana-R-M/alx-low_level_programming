#include <stdio.h>

/**
 *Main - Hexadecimal, prints all the numbers of base 16 in lowercase
 *
 *Return: Always 0(Success)
 */

int main(void)
{

        int a;
        char alphabet;
       
        for (alphabet = 'a'; alphabet <= 'F'; a++)
                putchar(alphabet);

        putchar('\n');

        return(0);
}
