#include <stdio.h>
#include <unistd.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int print(FILE *filename, char *arrayname);

int main(void)
{
    //generate ref array start ---------------------------------------------

    // open output file
    FILE *ff = fopen("output.txt", "w");

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

    char outArray[4] = "000";

    outArray[3] = '\0';

    for(int d = 0; d < 62; d++)
    {
        outArray[0] = refArray[d];
        print(ff, outArray);
        // fprintf(ff,"%s\n", outArray);

        for(int e = 0; e < 62; e++)
        {
            outArray[1] = refArray[e];
            print(ff, outArray);
            // fprintf(ff,"%s\n", outArray);

            for(int f = 0; f < 62; f++)
            {
                outArray[2] = refArray[f];
                print(ff, outArray);
                // fprintf(ff, "%s\n", outArray);
            }
        }
    }

    fclose(ff);
}

//print(ff autArray)
int print(FILE *filename, char *arrayname)
{
    fprintf(filename, "%s\n", arrayname);
    return 0;
}