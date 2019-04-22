#include <stdio.h>
#include <unistd.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    // open output file
    FILE *f = fopen("output.txt", "w");

    //reference array
    char refArray[62];

    //array creation loop
    int counter = 0;
    for(char a = 'a'; a <= 'z'; a++)
    {
        refArray[counter] = a;
        counter++;
        refArray[counter] = toupper(a);
        counter++;
    }
    for(int b = 0; b <= 9; b++)
    {
        refArray[counter] = b;
        counter++;
    }

    fprintf (f, "%s\n", refArray);
    fclose (f);

}