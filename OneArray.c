#include <stdio.h>
#include <unistd.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    //open output file
    FILE *f = fopen("output.txt", "w");

    //reference array
    char refArray[63];
    int arrLength = 63;

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
    refArray[counter] = '\0';

    //print to file part
    fprintf(f,"%s\n", refArray);
    fclose(f);

    //print to console part
    // for(int c = 0; c < arrLength; c++)
    // {
    //     printf("%c\n", refArray[c]);
    // }

}