#include <stdio.h>
#include <unistd.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    //generate ref array start ---------------------------------------------

    // open output file
    FILE *f = fopen("output.txt", "w");

    //reference array
    char refArray[63];

    //array creation loop
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

    //terminating part
    // refArray[counter] = '\0';
    // for(int cc = 0; cc < 63; cc++)
    // {
    //     printf("%c\n", refArray[cc]);
    // }
    //generate ref array end ---------------------------------------------

    for(int d = 0; d < 63; d++)
    {
       fprintf(f;"%c\n", refArray[d]);
    }
    fclose(f);
}