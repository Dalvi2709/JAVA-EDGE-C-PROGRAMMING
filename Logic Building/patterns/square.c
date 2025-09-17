#include <stdio.h>
#include <conio.h>
int main()
{
    int n = 5;
    // *****    11111     @@@@@    #####
    // *****    11111     @@@@@    #####
    // *****    11111     @@@@@    #####
    // *****    11111     @@@@@    #####
    // *****    11111     @@@@@    #####

    // for (int i = 1; i < n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // 11111  AAAAA
    // 22222  BBBBB
    // 33333  CCCCC
    // 44444  DDDDD
    // 55555  EEEEE

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         printf("%d",i);
    //     }
    //     printf("\n");
    // }

    // char ch = 'A';
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         printf("%c", ch);
    //     }
    //     printf("\n");
    //     ch++;
    // }

    // 12345  ABCDE  abcde
    // 12345  ABCDE  abcde
    // 12345  ABCDE  abcde
    // 12345  ABCDE  abcde
    // 12345  ABCDE  abcde

    // char ch = 'A';
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         printf("%c", ch);
    //         ch++;
    //     }
    //     printf("\n");
    //     ch = 'A';
    // }

    //    123  abc
    //    456  def
    //    789  ghi
    
    // int c = 1;
    // char ch = 'a';
    // for (int i = 1; i <= 3; i++)
    // {
    //     for (int j = 1; j <= 3; j++)
    //     {

    //         // printf("%d", c);
    //         printf("%c",ch);
    //         // c = c + 1;
    //         ch++;
    //     }
    //     printf("\n");
    // }

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
}