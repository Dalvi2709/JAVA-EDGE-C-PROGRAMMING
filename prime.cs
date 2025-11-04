using System;
class Program
{
    static void Main()
    {
        for (int n = 2; n <= 20; n++)
        {
            bool prime = true;
            for (int i = 2; i <= n / 2; i++)
                if (n % i == 0) { prime = false; break; }
            if (prime) Console.Write(n + " ");
        }
    }
}
