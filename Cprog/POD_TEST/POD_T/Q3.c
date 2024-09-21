#include <stdio.h>

int main()
{
    int j, i;

    for (i = 1; i < 5; i++)
    {

        printf(" %d ", i);
        if (i == 4)
        {
            for (j = 3; j > 0; j--)
            {
                printf(" %d ", j);
            }
        }
    }
}