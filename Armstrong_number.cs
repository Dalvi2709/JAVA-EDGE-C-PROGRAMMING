using System;
class Program
{
    static void Main()
    {
        int n = 153, sum = 0, temp = n, r;
        while (n > 0)
        {
            r = n % 10;
            sum += r * r * r;
            n /= 10;
        }
        if (sum == temp) Console.WriteLine("Armstrong");
        else Console.WriteLine("Not Armstrong");
    }
}
