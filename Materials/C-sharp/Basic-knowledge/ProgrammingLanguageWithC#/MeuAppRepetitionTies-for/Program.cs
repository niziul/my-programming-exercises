using System;

namespace MeuAppRepetitionTiesFor
{
    class Program
    {
        static void Main(string[] args)
        {
            // Conta de 0 a 5 
            for (var i = 0; i <= 5; i++)
                Console.WriteLine(i);

            Console.WriteLine();    

            // Conta de 1 a 5 
            for (var i = 1; i <= 5; i++)
                Console.WriteLine(i);
                
            Console.WriteLine();    

            // Conta de 0 a 4 
            for (var i = 0; i < 5; i++)
                Console.WriteLine(i);

            Console.WriteLine();    

            // Conta de 5 a 0 
            for (var i = 5; i >= 0; i--)
                Console.WriteLine(i);
             
        }
    }
}