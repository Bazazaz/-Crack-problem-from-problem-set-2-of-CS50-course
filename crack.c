#define _XOPEN_SOURCE
#include <stdio.h>
#include <unistd.h>
#include <cs50.h>
#include <string.h>

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

        //start first loop
        int count = 0;
        for (char a = 'a'; a <= 'z'; a++)
        {
            char pwdAr[] = {a ,'\0'};
            string tHash = crypt(pwdAr, salt); //making temp hash from current char
            printf("tHash is: %s\n", tHash);
            for (int i = 2; i <= 12; i++) //comparing temp hash with given hash
            {
                if (tHash[i] == hash[i])
                {
                    count++;
                    //printf("mached char is: %c\n", tHash[i]);
                }

            }
            if(count == 11) //if all hash chars are the same
            {
                printf("It's a MATCH!, password is: %c\n", a);
                break;
            }
            else
            {
                count = 0;
                printf("no luck(\n");
            }

        }

    }
    else
    {
        printf("ERROR\n");
        return 1;
    }
}
