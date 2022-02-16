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

            // var arr = new int[3];
            
            // for (int index = 0; index < 10; index++)
            // {
            //     // System.IndexOutOfRangeException
            //     Console.WriteLine(arr[index]);
            // }






            /*
                Try/Catch
            */

            var arr = new int[3];

            try
            {                
                for (int index = 0; index < 10; index++)
                {
                    Console.WriteLine(arr[index]);
                }
    
            }
            catch (Exception ex)
            {
                Console.WriteLine(ex.InnerException);
                Console.WriteLine(ex.Message);
                
                Console.WriteLine("Ops, algo deu errado!");
            }
            
        }
    }
}