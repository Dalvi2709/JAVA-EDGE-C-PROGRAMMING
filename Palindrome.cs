using System;
class Program
{
    static void Main()
    {
        int n = 121, r, sum = 0, temp = n;
        while (n > 0)
        {
            r = n % 10;
            sum = (sum * 10) + r;
            n /= 10;
        }
        if (temp == sum) Console.WriteLine("Palindrome");
        else Console.WriteLine("Not Palindrome");
    }
}
