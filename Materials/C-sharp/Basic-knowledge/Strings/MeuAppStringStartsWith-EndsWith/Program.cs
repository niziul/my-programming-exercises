using System;

namespace MeuAppStringStartsWith_EndsWith
{
    class Program
    {
        static void Main(string[] args)
        {
            var texto = "Este texto é um teste!";

            Console.WriteLine(texto.StartsWith("Este")); // True
            Console.WriteLine(texto.StartsWith("este")); // False
            Console.WriteLine(texto.StartsWith("texto")); // False
            
            Console.WriteLine("----------------"); 
            
            Console.WriteLine(texto.EndsWith("teste!")); // true
            Console.WriteLine(texto.EndsWith("Teste")); // False
            Console.WriteLine(texto.EndsWith("xpro")); // False
        
        }
    }
}