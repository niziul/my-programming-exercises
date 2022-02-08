using System;

namespace MeuAppConstants
{
    class Program
    {
        static void Main(string[] args)
        {
            //const int IDADE_MINIMA; // Correto inicia com ZERO
            const int IDADE_MINIMA = 25; // Correto inica com 25
            //const int IDADE_MINIMA = 25; // Errado
            //const int IDADE_MINIMA; // Errado


            var text = "Testing";
            Console.WriteLine(text.ToLower());          
        }       
    }
}