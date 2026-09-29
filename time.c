#include <stdio.h>

int main(void)
{
    // printf(" |\n");
    // printf(" |\n");

    // printf(" _\n");
    // printf(" _|\n");
    // printf("|_\n");

    // printf("_\n");
    // printf("_|\n");
    // printf("_|\n");

    // printf("|_|\n");
    // printf("  |\n");

    // printf(" _\n");
    // printf("|_\n");
    // printf(" _|\n");

    // printf(" _\n");
    // printf("|_\n");
    // printf("|_|\n");

    // printf("_\n");
    // printf(" |\n");
    // printf(" |\n");

    // printf(" _\n");
    // printf("|_|\n");
    // printf("|_|\n");

    // printf(" _\n");
    // printf("|_|\n");
    // printf(" _|\n");

    // printf(" _\n");
    // printf("| |\n");
    // printf("|_|\n");

    char one[3][3] = {{' ', ' ', ' '}, {' ', '|', ' '}, {' ', '|', ' '}};
    char two[3][3] = {{' ', '_', ' '}, {' ', '_', '|'}, {'|', '_', ' '}};
    char three[3][3] = {{'_', ' ', ' '}, {'_', '|', ' '}, {'_', '|', ' '}};
    char four[3][3] = {{'|', '_', '|'}, {' ', ' ', '|'}, {' ', ' ', ' '}};
    char five[3][3] = {{' ', '_', ' '}, {'|', '_', ' '}, {' ', '_', '|'}};
    char six[3][3] = {{' ', '_', ' '}, {'|', '_', ' '}, {'|', '_', '|'}};
    char seven[3][3] = {{'_', ' ', ' '}, {' ', '|', ' '}, {' ', '|', ' '}};
    char eight[3][3] = {{' ', '_', ' '}, {'|', '_', '|'}, {'|', '_', '|'}};
    char nine[3][3] = {{' ', '_', ' '}, {'|', '_', '|'}, {' ', '_', '|'}};
    char zero[3][3] = {{' ', '_', ' '}, {'|', ' ', '|'}, {'|', '_', '|'}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            putchar(one[i][j]);
        }
        for (int j = 0; j < 3; j++)
        {
            putchar(two[i][j]);
        }
        for (int j = 0; j < 3; j++)
        {
            putchar(three[i][j]);
        }
        for (int j = 0; j < 3; j++)
        {
            putchar(four[i][j]);
        }
        for (int j = 0; j < 3; j++)
        {
            putchar(five[i][j]);
        }
        for (int j = 0; j < 3; j++)
        {
            putchar(six[i][j]);
        }
        for (int j = 0; j < 3; j++)
        {
            putchar(seven[i][j]);
        }
        for (int j = 0; j < 3; j++)
        {
            putchar(eight[i][j]);
        }
        for (int j = 0; j < 3; j++)
        {
            putchar(nine[i][j]);
        }
        for (int j = 0; j < 3; j++)
        {
            putchar(zero[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            putchar(two[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            putchar(three[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            putchar(four[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            putchar(five[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            putchar(six[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            putchar(seven[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            putchar(eight[i][j]);
        }
        printf("\n");
    }
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            putchar(nine[i][j]);
        }
        printf("\n");
    }
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            putchar(zero[i][j]);
        }
        printf("\n");
    }

    return 0;
}