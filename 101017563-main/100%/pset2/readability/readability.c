#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

// Ask user for input (string)
// Count how many words;letters;sentences are given
// Use "Coleman-Liau index" to calculate the given grade

// Sentences = the same amount of punctuacitons (e.g. "." "!" "?")
// round Grade to nearest whoal value
// If output < 1 ; printf("Before Grade 1") ; If output = 16+ ; printf("Grade 16+")

int get_index(string s);

int main()
{
    string text = get_string("Text: ");
    int index = get_index(text);

    if (index <1)
    {
        printf("Before Grade 1\n");
    }
    else if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %d\n", index);
    }
    return 0;
}

int get_index(string s)
{
    int letters = 0;
    int sentences = 0;
    int words = 0;

    for(int i = 0; i < strlen(s); i++)
    {
        char ch = s[i];
        if(isalpha(ch))
        {
            letters++;
        }
        if (isspace(ch))
        {
            words++;
        }
        if (ch == '.' || ch== '!' || ch== '?')
        {
            sentences++;
        }
    }
    words++;


    float L = (letters * 100.0f) / words;
    float S = (sentences *100.0f) / words;
    return round(0.0588 * L - 0.296 * S - 15.8);

}