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

    char outArray1[2] = "0";
    outArray1[1] = '\0';

    char outArray2[3] = "00";
    outArray2[2] = '\0';

    char outArray3[4] = "000";
    outArray3[3] = '\0';

    char outArray4[5] = "0000";
    outArray4[4] = '\0';

    for(int d = 0; d < 62; d++)
    {
        outArray1[0] = refArray[d];
        print(ff, outArray1);
        // fprintf(ff,"%s\n", outArray);

        for(int e = 0; e < 62; e++)
        {
            outArray2[0] = outArray1[0];
            outArray2[1] = refArray[e];
            print(ff, outArray2);
            // fprintf(ff,"%s\n", outArray);

            for(int f = 0; f < 62; f++)
            {
                outArray3[0] = outArray1[0];
                outArray3[1] = outArray2[1];
                outArray3[2] = refArray[f];
                print(ff, outArray3);
                // fprintf(ff, "%s\n", outArray);

                for(int g = 0; g < 62; g++)
                {
                    outArray4[0] = outArray1[0];
                    outArray4[1] = outArray2[1];
                    outArray4[2] = outArray3[2];
                    outArray4[3] = refArray[g];
                    print(ff, outArray4);
                }
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