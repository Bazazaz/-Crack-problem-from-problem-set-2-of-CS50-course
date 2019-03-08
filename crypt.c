#define _XOPEN_SOURCE
#include <stdio.h>
#include <unistd.h>
#include <cs50.h>
#include <string.h>

int main(int argc, string argv[])
{
    //generates hash from input string

    // char saltAr[] = {'2', '5','\0'};
    // char pwdAr[] = {'t','\0'};
    string cPwd = crypt(argv[1], argv[2]);
    printf("Crypted password is: %s\n", cPwd);
}
