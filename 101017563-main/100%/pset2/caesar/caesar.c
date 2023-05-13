#include <cs50.h>
#include <stdio.h>
#include <string.h> // + strlen function
#include <stdlib.h> // + convert a string into a number(int)
#include <ctype.h>  // + isdigit function

    // programma strādā,ierakstot tikai "1 line of code".

    // argv[1] = cipars / digit

    // pārveido argv[1] no "string" uz "int"

    // Ask for unput

    //  c(i) = (p(i)+k) % 26
        // c = cipertext ; p = plaintext ; k = key ; %26 = /26 vai Moda[26]

                // step 1. argv= from "string" to "int"
                // step 2. Input = k ; c(i) = (p(i)+k) % 26
                // step 3. Output = from "int" to "string"

int main(int argc, string argv[])
{
    // check if command line does not contain more than 2 values
    if (argc != 2)
    {
    printf("Usage: ceaser key");
    return 1;
    }
    // check 1 by 1 if this character is a digit
    for (int i = 0 ; i <  strlen(argv[1]); i++ )
    // i set to 0 ; check if i(argument lines) are less then 2, if yes, add 1+ to "i" ; if no below function is called
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ceaser key");
            return 1;
        }
    }

        int k = atoi(argv[1]); // k = key

        string plaintext = get_string("plaintext: ");
        printf("ciphertext: ");

        for (int a = 0 ; a < strlen(plaintext); a++)
        {
            if (isupper(plaintext[a]))
            {
                printf("%c", (plaintext[a] - 65 + k) % 26 + 65);
            }
            else if (islower(plaintext[a]))
            {
                printf("%c", (plaintext[a] - 97 + k) % 26 + 97);
            }
            else
            {
                printf("%c", plaintext[a]);
            }
        }
        printf("\n");
}