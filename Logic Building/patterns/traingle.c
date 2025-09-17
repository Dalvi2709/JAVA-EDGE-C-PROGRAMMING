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

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    // * * * * *     A A A A A    # # # # #
    // * * * *       A A A A      # # # #
    // * * *         A A A        # # #
    // * *           A A          # #
    // *             A            #

    // for (int i = 5; i >= 1; i--)    {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    //         *
    //       * *
    //     * * *
    //   * * * *
    // * * * * *

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n-i; j++)
    //     {
    //         printf("  ");
    //     }
    //     for (int k = 1; k <= i; k++)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    // * * * * *
    //   * * * *
    //     * * *
    //       * *
    //         *

    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= n-i; j++)
        {
            printf("  ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
