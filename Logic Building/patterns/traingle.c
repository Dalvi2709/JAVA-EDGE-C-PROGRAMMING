#include <stdio.h>
#include <conio.h>
int main()
{

    int n = 5;
    // *             A            #
    // * *           A A          # #
    // * * *         A A A        # # #
    // * * * *       A A A A      # # # #
    // * * * * *     A A A A A    # # # # #

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
    return 0;
}
