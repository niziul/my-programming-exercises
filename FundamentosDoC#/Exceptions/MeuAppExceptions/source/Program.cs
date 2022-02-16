using System;

namespace MeuAppExceptions
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Clear();

            /*
                Tratamento de erros:
            */

            var arr = new int[3];
            
            for (int index = 0; index < 10; index++)
            {
                // System.IndexOutOfRangeException
                Console.WriteLine(arr[index]);
            }


            
        }
    }
}