using System;

namespace finance_ecommerce
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("finance-ecommerce - Console Application");
            ProcessData();
        }

        static void ProcessData()
        {
            // Sample processing logic
            string input = Console.ReadLine();
            if (input != null)
            {
                Console.WriteLine(input.ToUpper());
            }
        }
    }
}
