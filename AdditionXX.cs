using System;


class Display
{
   static int Add(int a, int b)
   {
      int sum = 0;
      sum = a + b;
      return sum;
   }
    static void Main()
    {
        int a = 0, j = 0, ans = 0;

        Console.Write("Enter the First No : ");
        a = Convert.ToInt32(Console.ReadLine());

        Console.Write("Enter the Secound No : ");
        j = Convert.ToInt32(Console.ReadLine());

        ans = Add(a,j);

        Console.WriteLine("Addition is " + ans);
    }
}