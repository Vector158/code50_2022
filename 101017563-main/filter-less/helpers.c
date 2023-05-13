//code
#include "helpers.h"
#include <math.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    // saskaiti visas 3 vertibas,izdali ar 3,got new vertība
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width ; j++)
        {
            RGBTRIPLE pixel = image[i][j];

            int average = round(( pixel.rgbtBlue + pixel.rgbtRed + pixel.rgbtGreen ) / 3.0);
            image[i][j].rgbtBlue =  image[i][j].rgbtGreen =  image[i][j].rgbtRed = average ;
            //image[i][j].rgbtBlue =
            //image[i][j].rgbtGreen =
            //image[i][j].rgbtRed =
            // done :)
        }
    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    for ( int i = 0 ; i < height ; i++)
    {
        for ( int j = 0 ; j < width ; j++)
        {
            RGBTRIPLE pixel = image[i][j];
 // sepiaRed = .393 * originalRed + .769 * originalGreen + .189 * originalBlue
 // sepiaGreen = .349 * originalRed + .686 * originalGreen + .168 * originalBlue
 // sepiaBlue = .272 * originalRed + .534 * originalGreen + .131 * originalBlue
            int sepaiRed = round(0.393 * pixel.rgbtRed + 0.769 * pixel.rgbtGreen + 0.189 *pixel.rgbtBlue);

            int sepaiGreen = round(0.349 * pixel.rgbtRed + 0.686 * pixel.rgbtGreen + 0.168 * pixel.rgbtBlue);

            int sepaiBlue = round(0.272 * pixel.rgbtRed + 0.534 * pixel.rgbtGreen + 0.131 * pixel.rgbtBlue);

            image[i][j].rgbtRed = sepaiRed > 255 ? 255 : sepaiRed;
            image[i][j].rgbtGreen = sepaiGreen> 255 ? 255 : sepaiGreen;
            image[i][j].rgbtBlue = sepaiBlue> 255 ? 255 : sepaiBlue;
        }
    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
// pixel original location = top left corner --> pixel changed location = top right corner
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}
