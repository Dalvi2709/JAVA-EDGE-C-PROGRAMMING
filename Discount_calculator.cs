using System;
class Program
{
    static void Main()
    {
        double price = 1000, discount = 10; 
        double discountAmt = (price * discount) / 100;
        double finalPrice = price - discountAmt;
        Console.WriteLine("Discount Amount: " + discountAmt);
        Console.WriteLine("Final Price: " + finalPrice);
    }
}
