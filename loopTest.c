#include <stdio.h>
#include <unistd.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char fourChars[5];

    // open output file
    FILE *f = fopen("output.txt", "w");

    for (char a = 'a'; a <= 'c'; a++)
    {
        fourChars[0] = a;
        fprintf (f, "%s\n", fourChars);
        fourChars[0] = toupper(a);
        fprintf (f, "%s\n", fourChars);
        for (char inta = '0'; inta <= '3'; inta++)
        {
            fourChars[0] = inta;
            fprintf (f, "%s\n", fourChars);
        }
        fourChars[0] = a;
        for (char b = 'a'; b <= 'c'; b++)
        {
            fourChars[1] = b;
            fprintf (f, "%s\n", fourChars);
            fourChars[1] = toupper(b);
            fprintf (f, "%s\n", fourChars);
            for (char intb = '0'; intb <= '3'; intb++)
            {
                fourChars[1] = intb;
                fprintf (f, "%s\n", fourChars);
            }
                // for (char c = 'a'; c <= 'z'; c++)
                // {
                //     fourChars[2] = c;
                //     fprintf (f, "%s\n", fourChars);
                //     fourChars[2] = toupper(c);
                //     fprintf (f, "%s\n", fourChars);
                //     for (char intc = '0'; intc <= '9'; intc++)
                //     {
                //         fourChars[2] = intc;
                //         fprintf (f, "%s\n", fourChars);
                //     }

                // }

        }

    }
    fclose (f);

}