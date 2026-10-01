#include <time.h>
#include <stdio.h>
#include <unistd.h>

void show_time(int hour, int minute, int second)

{
    char one[3][3] = {{' ', ' ', ' '}, {' ', '|', ' '}, {' ', '|', ' '}};
    char two[3][3] = {{' ', '_', ' '}, {' ', '_', '|'}, {'|', '_', ' '}};
    char three[3][3] = {{'_', ' ', ' '}, {'_', '|', ' '}, {'_', '|', ' '}};
    char four[3][3] = {{' ', ' ', ' '}, {'|', '_', '|'}, {' ', ' ', '|'}};
    char five[3][3] = {{' ', '_', ' '}, {'|', '_', ' '}, {' ', '_', '|'}};
    char six[3][3] = {{' ', '_', ' '}, {'|', '_', ' '}, {'|', '_', '|'}};
    char seven[3][3] = {{'_', ' ', ' '}, {' ', '|', ' '}, {' ', '|', ' '}};
    char eight[3][3] = {{' ', '_', ' '}, {'|', '_', '|'}, {'|', '_', '|'}};
    char nine[3][3] = {{' ', '_', ' '}, {'|', '_', '|'}, {' ', '_', '|'}};
    char zero[3][3] = {{' ', '_', ' '}, {'|', ' ', '|'}, {'|', '_', '|'}};

    // hours calculations
    int hour_ones = hour % 10;
    int hour_tens = hour / 10;

    // minutes calculations
    int minutes_ones = minute % 10;
    int minutes_tens = minute / 10;

    // second calculate
    int second_ones = second % 10;
    int second_tens = second / 10;

    switch (hour_tens)
    {
    case 0:
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                putchar(two[i][j]);
            }

            switch (hour_ones)
            {
            case 1:
                for (int j = 0; j < 3; j++)
                {
                    putchar(one[i][j]);
                }
                break;
            case 2:
                for (int j = 0; j < 3; j++)
                {
                    putchar(two[i][j]);
                }
                break;
            case 3:
                for (int j = 0; j < 3; j++)
                {
                    putchar(three[i][j]);
                }
                break;
            case 4:
                for (int j = 0; j < 3; j++)
                {
                    putchar(four[i][j]);
                }
                break;
            case 5:
                for (int j = 0; j < 3; j++)
                {
                    putchar(five[i][j]);
                }
                break;
            case 6:
                for (int j = 0; j < 3; j++)
                {
                    putchar(six[i][j]);
                }
                break;
            case 7:
                for (int j = 0; j < 3; j++)
                {
                    putchar(seven[i][j]);
                }
                break;
            case 8:
                for (int j = 0; j < 3; j++)
                {
                    putchar(eight[i][j]);
                }
                break;
            case 9:
                for (int j = 0; j < 3; j++)
                {
                    putchar(nine[i][j]);
                }
                break;
            case 0:
                for (int j = 0; j < 3; j++)
                {
                    putchar(zero[i][j]);
                }
                break;
            }
            putchar(':');
            switch (minutes_tens)
            {
            case 1:
                for (int j = 0; j < 3; j++)
                {
                    putchar(one[i][j]);
                }
                break;
            case 2:
                for (int j = 0; j < 3; j++)
                {
                    putchar(two[i][j]);
                }
                break;
            case 3:
                for (int j = 0; j < 3; j++)
                {
                    putchar(three[i][j]);
                }
                break;
            case 4:
                for (int j = 0; j < 3; j++)
                {
                    putchar(four[i][j]);
                }
                break;
            case 5:
                for (int j = 0; j < 3; j++)
                {
                    putchar(five[i][j]);
                }
                break;

            case 0:
                for (int j = 0; j < 3; j++)
                {
                    putchar(zero[i][j]);
                }
                break;
            }
            switch (minutes_ones)
            {
            case 1:
                for (int j = 0; j < 3; j++)
                {
                    putchar(one[i][j]);
                }
                break;
            case 2:
                for (int j = 0; j < 3; j++)
                {
                    putchar(two[i][j]);
                }
                break;
            case 3:
                for (int j = 0; j < 3; j++)
                {
                    putchar(three[i][j]);
                }
                break;
            case 4:
                for (int j = 0; j < 3; j++)
                {
                    putchar(four[i][j]);
                }
                break;
            case 5:
                for (int j = 0; j < 3; j++)
                {
                    putchar(five[i][j]);
                }
                break;
            case 6:
                for (int j = 0; j < 3; j++)
                {
                    putchar(six[i][j]);
                }
                break;
            case 7:
                for (int j = 0; j < 3; j++)
                {
                    putchar(seven[i][j]);
                }
                break;
            case 8:
                for (int j = 0; j < 3; j++)
                {
                    putchar(eight[i][j]);
                }
                break;
            case 9:
                for (int j = 0; j < 3; j++)
                {
                    putchar(nine[i][j]);
                }
                break;
            case 0:
                for (int j = 0; j < 3; j++)
                {
                    putchar(zero[i][j]);
                }
                break;
            }
            putchar(':');
            switch (second_tens)
            {
            case 1:
                for (int j = 0; j < 3; j++)
                {
                    putchar(one[i][j]);
                }
                break;
            case 2:
                for (int j = 0; j < 3; j++)
                {
                    putchar(two[i][j]);
                }
                break;
            case 3:
                for (int j = 0; j < 3; j++)
                {
                    putchar(three[i][j]);
                }
                break;
            case 4:
                for (int j = 0; j < 3; j++)
                {
                    putchar(four[i][j]);
                }
                break;
            case 5:
                for (int j = 0; j < 3; j++)
                {
                    putchar(five[i][j]);
                }
                break;

            case 0:
                for (int j = 0; j < 3; j++)
                {
                    putchar(zero[i][j]);
                }
                break;
            }
            switch (second_ones)
            {
            case 1:
                for (int j = 0; j < 3; j++)
                {
                    putchar(one[i][j]);
                }
                break;
            case 2:
                for (int j = 0; j < 3; j++)
                {
                    putchar(two[i][j]);
                }
                break;
            case 3:
                for (int j = 0; j < 3; j++)
                {
                    putchar(three[i][j]);
                }
                break;
            case 4:
                for (int j = 0; j < 3; j++)
                {
                    putchar(four[i][j]);
                }
                break;
            case 5:
                for (int j = 0; j < 3; j++)
                {
                    putchar(five[i][j]);
                }
                break;
            case 6:
                for (int j = 0; j < 3; j++)
                {
                    putchar(six[i][j]);
                }
                break;
            case 7:
                for (int j = 0; j < 3; j++)
                {
                    putchar(seven[i][j]);
                }
                break;
            case 8:
                for (int j = 0; j < 3; j++)
                {
                    putchar(eight[i][j]);
                }
                break;
            case 9:
                for (int j = 0; j < 3; j++)
                {
                    putchar(nine[i][j]);
                }
                break;
            case 0:
                for (int j = 0; j < 3; j++)
                {
                    putchar(zero[i][j]);
                }
                break;
            }
            printf("\n");
        }
        break;
    case 1:
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                putchar(two[i][j]);
            }

            switch (hour_ones)
            {
            case 1:
                for (int j = 0; j < 3; j++)
                {
                    putchar(one[i][j]);
                }
                break;
            case 2:
                for (int j = 0; j < 3; j++)
                {
                    putchar(two[i][j]);
                }
                break;
            case 3:
                for (int j = 0; j < 3; j++)
                {
                    putchar(three[i][j]);
                }
                break;
            case 4:
                for (int j = 0; j < 3; j++)
                {
                    putchar(four[i][j]);
                }
                break;
            case 5:
                for (int j = 0; j < 3; j++)
                {
                    putchar(five[i][j]);
                }
                break;
            case 6:
                for (int j = 0; j < 3; j++)
                {
                    putchar(six[i][j]);
                }
                break;
            case 7:
                for (int j = 0; j < 3; j++)
                {
                    putchar(seven[i][j]);
                }
                break;
            case 8:
                for (int j = 0; j < 3; j++)
                {
                    putchar(eight[i][j]);
                }
                break;
            case 9:
                for (int j = 0; j < 3; j++)
                {
                    putchar(nine[i][j]);
                }
                break;
            case 0:
                for (int j = 0; j < 3; j++)
                {
                    putchar(zero[i][j]);
                }
                break;
            }
            putchar(':');
            switch (minutes_tens)
            {
            case 1:
                for (int j = 0; j < 3; j++)
                {
                    putchar(one[i][j]);
                }
                break;
            case 2:
                for (int j = 0; j < 3; j++)
                {
                    putchar(two[i][j]);
                }
                break;
            case 3:
                for (int j = 0; j < 3; j++)
                {
                    putchar(three[i][j]);
                }
                break;
            case 4:
                for (int j = 0; j < 3; j++)
                {
                    putchar(four[i][j]);
                }
                break;
            case 5:
                for (int j = 0; j < 3; j++)
                {
                    putchar(five[i][j]);
                }
                break;

            case 0:
                for (int j = 0; j < 3; j++)
                {
                    putchar(zero[i][j]);
                }
                break;
            }
            switch (minutes_ones)
            {
            case 1:
                for (int j = 0; j < 3; j++)
                {
                    putchar(one[i][j]);
                }
                break;
            case 2:
                for (int j = 0; j < 3; j++)
                {
                    putchar(two[i][j]);
                }
                break;
            case 3:
                for (int j = 0; j < 3; j++)
                {
                    putchar(three[i][j]);
                }
                break;
            case 4:
                for (int j = 0; j < 3; j++)
                {
                    putchar(four[i][j]);
                }
                break;
            case 5:
                for (int j = 0; j < 3; j++)
                {
                    putchar(five[i][j]);
                }
                break;
            case 6:
                for (int j = 0; j < 3; j++)
                {
                    putchar(six[i][j]);
                }
                break;
            case 7:
                for (int j = 0; j < 3; j++)
                {
                    putchar(seven[i][j]);
                }
                break;
            case 8:
                for (int j = 0; j < 3; j++)
                {
                    putchar(eight[i][j]);
                }
                break;
            case 9:
                for (int j = 0; j < 3; j++)
                {
                    putchar(nine[i][j]);
                }
                break;
            case 0:
                for (int j = 0; j < 3; j++)
                {
                    putchar(zero[i][j]);
                }
                break;
            }
            putchar(':');
            switch (second_tens)
            {
            case 1:
                for (int j = 0; j < 3; j++)
                {
                    putchar(one[i][j]);
                }
                break;
            case 2:
                for (int j = 0; j < 3; j++)
                {
                    putchar(two[i][j]);
                }
                break;
            case 3:
                for (int j = 0; j < 3; j++)
                {
                    putchar(three[i][j]);
                }
                break;
            case 4:
                for (int j = 0; j < 3; j++)
                {
                    putchar(four[i][j]);
                }
                break;
            case 5:
                for (int j = 0; j < 3; j++)
                {
                    putchar(five[i][j]);
                }
                break;

            case 0:
                for (int j = 0; j < 3; j++)
                {
                    putchar(zero[i][j]);
                }
                break;
            }
            switch (second_ones)
            {
            case 1:
                for (int j = 0; j < 3; j++)
                {
                    putchar(one[i][j]);
                }
                break;
            case 2:
                for (int j = 0; j < 3; j++)
                {
                    putchar(two[i][j]);
                }
                break;
            case 3:
                for (int j = 0; j < 3; j++)
                {
                    putchar(three[i][j]);
                }
                break;
            case 4:
                for (int j = 0; j < 3; j++)
                {
                    putchar(four[i][j]);
                }
                break;
            case 5:
                for (int j = 0; j < 3; j++)
                {
                    putchar(five[i][j]);
                }
                break;
            case 6:
                for (int j = 0; j < 3; j++)
                {
                    putchar(six[i][j]);
                }
                break;
            case 7:
                for (int j = 0; j < 3; j++)
                {
                    putchar(seven[i][j]);
                }
                break;
            case 8:
                for (int j = 0; j < 3; j++)
                {
                    putchar(eight[i][j]);
                }
                break;
            case 9:
                for (int j = 0; j < 3; j++)
                {
                    putchar(nine[i][j]);
                }
                break;
            case 0:
                for (int j = 0; j < 3; j++)
                {
                    putchar(zero[i][j]);
                }
                break;
            }

            printf("\n");
        }
        break;
    case 2:
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                putchar(two[i][j]);
            }

            switch (hour_ones)
            {
            case 1:
                for (int j = 0; j < 3; j++)
                {
                    putchar(one[i][j]);
                }
                break;
            case 2:
                for (int j = 0; j < 3; j++)
                {
                    putchar(two[i][j]);
                }
                break;
            case 3:
                for (int j = 0; j < 3; j++)
                {
                    putchar(three[i][j]);
                }
                break;
            case 4:
                for (int j = 0; j < 3; j++)
                {
                    putchar(four[i][j]);
                }
                break;
            case 5:
                for (int j = 0; j < 3; j++)
                {
                    putchar(five[i][j]);
                }
                break;
            case 6:
                for (int j = 0; j < 3; j++)
                {
                    putchar(six[i][j]);
                }
                break;
            case 7:
                for (int j = 0; j < 3; j++)
                {
                    putchar(seven[i][j]);
                }
                break;
            case 8:
                for (int j = 0; j < 3; j++)
                {
                    putchar(eight[i][j]);
                }
                break;
            case 9:
                for (int j = 0; j < 3; j++)
                {
                    putchar(nine[i][j]);
                }
                break;
            case 0:
                for (int j = 0; j < 3; j++)
                {
                    putchar(zero[i][j]);
                }
                break;
            }
            putchar(':');
            switch (minutes_tens)
            {
            case 1:
                for (int j = 0; j < 3; j++)
                {
                    putchar(one[i][j]);
                }
                break;
            case 2:
                for (int j = 0; j < 3; j++)
                {
                    putchar(two[i][j]);
                }
                break;
            case 3:
                for (int j = 0; j < 3; j++)
                {
                    putchar(three[i][j]);
                }
                break;
            case 4:
                for (int j = 0; j < 3; j++)
                {
                    putchar(four[i][j]);
                }
                break;
            case 5:
                for (int j = 0; j < 3; j++)
                {
                    putchar(five[i][j]);
                }
                break;

            case 0:
                for (int j = 0; j < 3; j++)
                {
                    putchar(zero[i][j]);
                }
                break;
            }
            switch (minutes_ones)
            {
            case 1:
                for (int j = 0; j < 3; j++)
                {
                    putchar(one[i][j]);
                }
                break;
            case 2:
                for (int j = 0; j < 3; j++)
                {
                    putchar(two[i][j]);
                }
                break;
            case 3:
                for (int j = 0; j < 3; j++)
                {
                    putchar(three[i][j]);
                }
                break;
            case 4:
                for (int j = 0; j < 3; j++)
                {
                    putchar(four[i][j]);
                }
                break;
            case 5:
                for (int j = 0; j < 3; j++)
                {
                    putchar(five[i][j]);
                }
                break;
            case 6:
                for (int j = 0; j < 3; j++)
                {
                    putchar(six[i][j]);
                }
                break;
            case 7:
                for (int j = 0; j < 3; j++)
                {
                    putchar(seven[i][j]);
                }
                break;
            case 8:
                for (int j = 0; j < 3; j++)
                {
                    putchar(eight[i][j]);
                }
                break;
            case 9:
                for (int j = 0; j < 3; j++)
                {
                    putchar(nine[i][j]);
                }
                break;
            case 0:
                for (int j = 0; j < 3; j++)
                {
                    putchar(zero[i][j]);
                }
                break;
            }
            putchar(':');
            switch (second_tens)
            {
            case 1:
                for (int j = 0; j < 3; j++)
                {
                    putchar(one[i][j]);
                }
                break;
            case 2:
                for (int j = 0; j < 3; j++)
                {
                    putchar(two[i][j]);
                }
                break;
            case 3:
                for (int j = 0; j < 3; j++)
                {
                    putchar(three[i][j]);
                }
                break;
            case 4:
                for (int j = 0; j < 3; j++)
                {
                    putchar(four[i][j]);
                }
                break;
            case 5:
                for (int j = 0; j < 3; j++)
                {
                    putchar(five[i][j]);
                }
                break;

            case 0:
                for (int j = 0; j < 3; j++)
                {
                    putchar(zero[i][j]);
                }
                break;
            }
            switch (second_ones)
            {
            case 1:
                for (int j = 0; j < 3; j++)
                {
                    putchar(one[i][j]);
                }
                break;
            case 2:
                for (int j = 0; j < 3; j++)
                {
                    putchar(two[i][j]);
                }
                break;
            case 3:
                for (int j = 0; j < 3; j++)
                {
                    putchar(three[i][j]);
                }
                break;
            case 4:
                for (int j = 0; j < 3; j++)
                {
                    putchar(four[i][j]);
                }
                break;
            case 5:
                for (int j = 0; j < 3; j++)
                {
                    putchar(five[i][j]);
                }
                break;
            case 6:
                for (int j = 0; j < 3; j++)
                {
                    putchar(six[i][j]);
                }
                break;
            case 7:
                for (int j = 0; j < 3; j++)
                {
                    putchar(seven[i][j]);
                }
                break;
            case 8:
                for (int j = 0; j < 3; j++)
                {
                    putchar(eight[i][j]);
                }
                break;
            case 9:
                for (int j = 0; j < 3; j++)
                {
                    putchar(nine[i][j]);
                }
                break;
            case 0:
                for (int j = 0; j < 3; j++)
                {
                    putchar(zero[i][j]);
                }
                break;
            }
            printf("\n");
        }
        break;
    }
}

void clear_screen(void)
{
    printf("\033[2j\033[H");
    fflush(stdout);

    printf("\n");
}

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

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         putchar(one[i][j]);
    //     }
    //     for (int j = 0; j < 3; j++)
    //     {
    //         putchar(two[i][j]);
    //     }
    //     putchar(' ');
    //     for (int j = 0; j < 3; j++)
    //     {
    //         putchar(three[i][j]);
    //     }
    //     for (int j = 0; j < 3; j++)
    //     {
    //         putchar(four[i][j]);
    //     }
    //     for (int j = 0; j < 3; j++)
    //     {
    //         putchar(five[i][j]);
    //     }
    //     for (int j = 0; j < 3; j++)
    //     {
    //         putchar(six[i][j]);
    //     }
    //     for (int j = 0; j < 3; j++)
    //     {
    //         putchar(seven[i][j]);
    //     }
    //     for (int j = 0; j < 3; j++)
    //     {
    //         putchar(eight[i][j]);
    //     }
    //     for (int j = 0; j < 3; j++)
    //     {
    //         putchar(nine[i][j]);
    //     }
    //     for (int j = 0; j < 3; j++)
    //     {
    //         putchar(zero[i][j]);
    //     }
    //     printf("\n");
    // }

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         putchar(two[i][j]);
    //     }
    //     printf("\n");
    // }

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         putchar(three[i][j]);
    //     }
    //     printf("\n");
    // }

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         putchar(four[i][j]);
    //     }
    //     printf("\n");
    // }

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         putchar(five[i][j]);
    //     }
    //     printf("\n");
    // }

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         putchar(six[i][j]);
    //     }
    //     printf("\n");
    // }

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         putchar(seven[i][j]);
    //     }
    //     printf("\n");
    // }

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         putchar(eight[i][j]);
    //     }
    //     printf("\n");
    // }

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         putchar(nine[i][j]);
    //     }
    //     printf("\n");
    // }

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         putchar(zero[i][j]);
    //     }
    //     printf("\n");
    // }

    // time_t now = time(NULL);
    // struct tm *t = localtime(&now);

    int running = 1;
    int hour = 0, minute = 0, second = 0;

    // printf("Hour: %d\n", hour);
    // printf("Minutes: %d\n", minute);
    // printf("Second: %d\n", second);

    while (running)
    {
        clear_screen();

        time_t now = time(NULL);
        struct tm *t = localtime(&now);

        if (t->tm_sec > second)
        {
            hour = t->tm_hour;
            minute = t->tm_min;
            second = t->tm_sec;

            printf("time: %d:%d:%d\n", hour, minute, second);
            show_time(hour, minute, second);
        }
        sleep(1);
    }

    return 0;
}