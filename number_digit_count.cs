using System;
class Program
{
    static void Main()
    {
        int n = 12345, count = 0;
        while (n > 0)
        {
            n /= 10;
            count++;
        }
        Console.WriteLine("Digits: " + count);
    }
}
