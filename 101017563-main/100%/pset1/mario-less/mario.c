#include <cs50.h>
#include <stdio.h>

int main(void)
{

int height;

do
{
height = get_int("Please enter height: ");
}
while (height<1 || height>8);

// Limit user input between [1;8]

int row, column;
for (row = 0; row < height; row++) //if row>height, add +1 row on new line
{
for (column = 0; column < height; column++)
{
if (column + row < height - 1)
{ // if column + row < height -1, print space,otherwise print "#"
printf(" ");
} else
 {
printf("#");
}
}
printf("\n");
}
}