#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
// 7 - 18 (100%) lack of key / too many keys / invalid key lenght


int checkKey(); //check for valid key
void Do_substitute();
void alpha_arr_val(char pos, string key);
// to get the alphabet array value of each plain text element (ex:plaintext = h|alphabet array = 8 {a=0, b=1 .....z=26})


int main(int argc, string argv[])
{
    if(argc != 2) // 2 command line arguments only
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    if(strlen(argv[1]) != 26) // argument [1] must be 26characters long
    {
        printf("Key must containt 26 characters\n");
        return 1;
    }

    for (int i = 0 ; i < strlen(argv[1]) ; i++) // check each element of string

    {
        if (! isalpha(argv[1][i])) // check if containts alphabetical characters
        {
            printf("Key must contain 26 characters.\n");
            return 1;
        }

        for (int j = i + 1 ; j < strlen(argv[1]) ; j++) // checking to the next element of arg[i]
        {

             if (toupper(argv[1][j]) == toupper(argv[1][i]))  // checking repeated element
             {
                printf("Key must not contain repeated alphabets.\n");
                 return 1;
             }
        }
    }

    Do_substitute(argv[1]);
    return 0;
}

void Do_substitute(string key)
{
    string p = get_string("plaintext: ");

    printf("cupdatweiphertext: ");

    for (int i = 0 ; i < strlen(p); i++)
    {
        if (isalpha(p[i]))
        {
            char x = p[i];
            if (islower(p[i]))
            {
                alpha_arr_val(tolower(x), key);
            }
            else
            {
                alpha_arr_val(toupper(x), key);
            }
        }
        else
        {
            printf("%c", p[i]);
        }
    }
        printf("\n");
}
void alpha_arr_val(char pos,string key)
{
    string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; // alphabet array

    for (int i = 0; i <strlen(alpha); i++)
    {
        if (islower(pos))
        {
            if (pos == tolower(alpha[i]))
            {
                printf("%c", tolower(key[i]));
            }
        }
    else
    {
        if (pos == toupper(alpha[i]))
        {
            printf("%c", toupper(key[i]));
        }
    }
    }



















}