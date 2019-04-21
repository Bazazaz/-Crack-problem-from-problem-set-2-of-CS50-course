#include <stdio.h>
#include <unistd.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    char twoChars[4];

    for (char a = 'a'; a <= 'z'; a++)
    {
        twoChars[0] = a;
        // printf("%s\n", twoChars);
        for (char b = 'a'; b <= 'z'; b++)
        {
            twoChars[1] = b;
            printf("%s\n", twoChars);
            // for (char c = 'a'; c <= 'z'; c++)
            // {
            //     twoChars[2] = c;
            //     printf("%s\n", twoChars);
            // }
        }
    }


}