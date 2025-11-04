using System;
class Program
{
    static void Main()
    {
        int n = 1050200, count = 0;
        while (n > 0)
        {
            if (n % 10 != 0) count++;
            n /= 10;
        }
        Console.WriteLine("Non-zero digits: " + count);
    }
}
