#define _XOPEN_SOURCE
#include <stdio.h>
#include <unistd.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int print(FILE *filename, char *arrayname);
int compareHashes(char a[], char b[]);

int main(void)
{
    string testHash = "50mzyjm7DMk32"; //hop 50
    string testSalt = "50";
    //generate ref array start ---------------------------------------------

    // open output file
    // FILE *ff = fopen("output.txt", "w");

    //reference array
    char refArray[53];

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
    // for(char b = '0'; b <= '9'; b++)
    // {
    //     refArray[counter] = b;
    //     counter++;
    // }
    //generate ref array end ---------------------------------------------

    char tempArray1[2] = "0";
    tempArray1[1] = '\0';

    char tempArray2[3] = "00";
    tempArray2[2] = '\0';

    char tempArray3[4] = "000";
    tempArray3[3] = '\0';

    char tempArray4[5] = "0000";
    tempArray4[4] = '\0';

    char tempArray5[6] = "00000";
    tempArray5[5] = '\0';

    for(int d = 0; d < 52; d++)
    {
        tempArray1[0] = refArray[d];

        // print(ff, tempArray1);
        for(int e = 0; e < 52; e++)
        {
            tempArray2[0] = tempArray1[0];
            tempArray2[1] = refArray[e];
            // print(ff, tempArray2);
            for(int f = 0; f < 52; f++)
            {
                tempArray3[0] = tempArray1[0];
                tempArray3[1] = tempArray2[1];
                tempArray3[2] = refArray[f];

                string currentHash = crypt(tempArray3, testSalt);
                if(compareHashes(currentHash, testHash) == 0)
                {
                    printf("password is %s\n", tempArray3);
                    return 0;
                    break;
                }

                // print(ff, tempArray3);

                // for(int g = 0; g < 52; g++)
                // {
                //     tempArray4[0] = tempArray1[0];
                //     tempArray4[1] = tempArray2[1];
                //     tempArray4[2] = tempArray3[2];
                //     tempArray4[3] = refArray[g];
                    // print(ff, tempArray4);
                    // for(int h = 0; h < 52; h++)
                    // {
                    //     tempArray5[0] = tempArray1[0];
                    //     tempArray5[1] = tempArray2[1];
                    //     tempArray5[2] = tempArray3[2];
                    //     tempArray5[3] = tempArray4[3];
                    //     tempArray5[4] = refArray[h];
                    //     print(ff, tempArray5);
                    // }
            }
        }
    }
}

    // fclose(ff);


//print(ff autArray)
int print(FILE *filename, char *arrayname)
{
    fprintf(filename, "%s\n", arrayname);
    return 0;
}

int compareHashes(char a[], char b[])
{
   int c = 0;

   while (a[c] == b[c]) {
      if (a[c] == '\0' || b[c] == '\0')
         break;
      c++;
   }

   if (a[c] == '\0' && b[c] == '\0')
      return 0;
   else
      return -1;
}