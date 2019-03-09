#define _XOPEN_SOURCE
#include <stdio.h>
#include <unistd.h>
#include <cs50.h>
#include <string.h>

int cryptCheck (int argc, string argv[]); //declaration for check function

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

        //2 char generating loop

        char twoChars[3];   //temp char array //? need to make it string
        twoChars[2] = '\0'; //closing byte
        int is_a_match = 0; // 0 false, 1 true

        for (char a = 'a'; a <= 'z'; a++)
        {
            twoChars[0] = a;
            is_a_match = cryptCheck(twoChars[0], salt);
            if (is_a_match == 1)
            {
                printf("It's a MATCH!, password is: %c\n", twoChars[0])
                return 0;
            }

            // for(char b = 'a'; b <= 'z'; b++)
            // {

            // }
        }

        //crypt check function
        //takes 1 or 2 chars --> makes hash from them --> compares it with given hash --> returns answer


        //start first loop
        // int count = 0;
        // for (char a = 'a'; a <= 'z'; a++)
        // {
        //     char pwdAr[] = {a ,'\0'};
        //     string tHash = crypt(pwdAr, salt); //making temp hash from current char
        //     printf("tHash is: %s\n", tHash);
        //     for (int i = 2; i <= 12; i++) //comparing temp hash with given hash
        //     {
        //         if (tHash[i] == hash[i])
        //         {
        //             count++;
        //             //printf("mached char is: %c\n", tHash[i]);
        //         }

        //     }
        //     if(count == 11) //if all hash chars are the same
        //     {
        //         printf("It's a MATCH!, password is: %c\n", a);
        //         break;
        //     }
        //     else
        //     {
        //         count = 0;
        //         printf("no luck(\n");
        //     }

        // }


    }
    else
    {
        printf("ERROR\n");
        return 1;
    }
}

int cryptCheck (int argc, string argv[])
{

}
