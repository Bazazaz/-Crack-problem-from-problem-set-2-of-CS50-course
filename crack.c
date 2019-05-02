#define _XOPEN_SOURCE
#include <stdio.h>
#include <unistd.h>
#include <cs50.h>
#include <string.h>

int checkForMatch()

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        string hash = argv[1];
        printf("hash is: %s\n", hash);

        //get salt from hash
        char salt[3];
        int sL = 0;
        while (sL < 2)
        {
            salt[sL] = hash[sL];
            sL++;
        }
        salt[2] = '\0';
        printf("salt is: %s\n", salt);
        printf("\n");

        //generate ref array -------------------------------------------------
        char refArray[63];
        int counter = 0;

        //chars part
        for(char a = 'a'; a <= 'z'; a++)
        {
            refArray[counter] = a;
            counter++;
            refArray[counter] = toupper(a);
            counter++;
        }

        //integers part
        for(char b = '0'; b <= '9'; b++)
        {
            refArray[counter] = b;
            counter++;
        }
        //----------------------------------------------------------------------

    }
    else
    {
        printf("ERROR\n");
        return 1;
    }
}
