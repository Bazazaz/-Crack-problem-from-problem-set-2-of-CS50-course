#include <stdio.h>
#include <unistd.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char fourChars[5];

    for (char a = 'a'; a <= 'z'; a++)
    {
        fourChars[0] = a;
        printf("%s\n", fourChars);
        fourChars[0] = toupper(a);
        printf("%s\n", fourChars);
        for (char inta = '0'; inta <= '9'; inta++)
        {
            fourChars[0] = inta;
            printf("%s\n", fourChars);
        }
        for (char b = 'a'; b <= 'z'; b++)
        {
            fourChars[1] = b;
            printf("%s\n", fourChars);
            fourChars[1] = toupper(b);
            printf("%s\n", fourChars);
            for (char intb = '0'; intb <= '9'; intb++)
            {
                fourChars[1] = intb;
                printf("%s\n", fourChars);
            }
                for (char c = 'a'; c <= 'z'; c++)
                {
                    fourChars[2] = c;
                    printf("%s\n", fourChars);
                    fourChars[2] = toupper(c);
                    printf("%s\n", fourChars);
                    for (char intc = '0'; intc <= '9'; intc++)
                    {
                        fourChars[2] = intc;
                        printf("%s\n", fourChars);
                    }

                }

        }

    }

}