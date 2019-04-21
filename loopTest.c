#include <stdio.h>
#include <unistd.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char fourChars[5];

    for (char a = 'a'; a <= 'd'; a++)
    {
        fourChars[0] = a;
        printf("%s\n", fourChars);
        fourChars[0] = toupper(a);
        printf("%s\n", fourChars);
        for (char inta = '0'; inta <= '3'; inta++)
        {
            fourChars[0] = inta;
            printf("%s\n", fourChars);
        }
        for (char b = 'a'; b <= 'd'; b++)
        {
            fourChars[1] = b;
            printf("%s\n", fourChars);
            fourChars[1] = toupper(b);
            printf("%s\n", fourChars);
            for (char intb = '0'; intb <= '3'; intb++)
            {
                fourChars[1] = intb;
                printf("%s\n", fourChars);
            }
        }
    }

}