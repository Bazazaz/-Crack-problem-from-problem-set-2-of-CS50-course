#define _XOPEN_SOURCE
#include <stdio.h>
#include <unistd.h>
#include <cs50.h>
#include <string.h>

//generates hash from input string
int main(int argc, string argv[])
{
    if (argc != 3)
    {
        printf("ERROR. Usage: ./crypt plaintext salt\n");
        return 1;
    }

    string cPwd = crypt(argv[1], argv[2]);
    printf("Crypted password is: %s\n", cPwd);
    return 0;
}

//./crypt f 50 ----> 50AWs/7oe6pkA
