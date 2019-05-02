#define _XOPEN_SOURCE
#include <stdio.h>
#include <unistd.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int compareHashes(char a[], char b[]);

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        string hash = argv[1];
        // printf("hash is: %s\n", hash);

        //get salt from hash
        char salt[3];
        int sL = 0;
        while (sL < 2)
        {
            salt[sL] = hash[sL];
            sL++;
        }
        salt[2] = '\0';
        // printf("salt is: %s\n", salt);
        // printf("\n");

        //generate ref array -------------------------------------------------
        char refArray[53];
        int counter = 0;
        for(char a = 'a'; a <= 'z'; a++)
        {
            refArray[counter] = a;
            counter++;
            refArray[counter] = toupper(a);
            counter++;
        }

        // chars arrays generetion --------------------------------------------------
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
            string currentHash = crypt(tempArray1, salt);
            if(compareHashes(currentHash, hash) == 0)
            {
                printf("%s\n", tempArray1);
                return 0;
                break;
            }
            for(int e = 0; e < 52; e++)
            {
                tempArray2[0] = tempArray1[0];
                tempArray2[1] = refArray[e];
                currentHash = crypt(tempArray2, salt);
                if(compareHashes(currentHash, hash) == 0)
                {
                    printf("%s\n", tempArray2);
                    return 0;
                    break;
                }
                for(int f = 0; f < 52; f++)
                {
                    tempArray3[0] = tempArray1[0];
                    tempArray3[1] = tempArray2[1];
                    tempArray3[2] = refArray[f];

                    currentHash = crypt(tempArray3, salt);
                    if(compareHashes(currentHash, hash) == 0)
                    {
                        printf("%s\n", tempArray3);
                        return 0;
                        break;
                    }
                    for(int g = 0; g < 52; g++)
                    {
                        tempArray4[0] = tempArray1[0];
                        tempArray4[1] = tempArray2[1];
                        tempArray4[2] = tempArray3[2];
                        tempArray4[3] = refArray[g];
                        currentHash = crypt(tempArray4, salt);
                        if(compareHashes(currentHash, hash) == 0)
                        {
                            printf("%s\n", tempArray4);
                            return 0;
                            break;
                        }
                        for(int h = 0; h < 52; h++)
                        {
                            tempArray5[0] = tempArray1[0];
                            tempArray5[1] = tempArray2[1];
                            tempArray5[2] = tempArray3[2];
                            tempArray5[3] = tempArray4[3];
                            tempArray5[4] = refArray[h];
                            currentHash = crypt(tempArray5, salt);
                            if(compareHashes(currentHash, hash) == 0)
                            {
                                printf("%s\n", tempArray5);
                                return 0;
                                break;
                            }
                        }
                    }
                }
            }
        }

    }
    else
    {
        printf("ERROR\n");
        return 1;
    }
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
