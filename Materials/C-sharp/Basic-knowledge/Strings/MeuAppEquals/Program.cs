using System;

namespace MeuAppEquals
{
    class Program
    {
        static void Main(string[] args)
        {
            var texto = "Este texto é um teste!";
            var teste = 33;

            Console.WriteLine(teste.Equals(44));


            Console.WriteLine(texto.Equals("Este texto é um teste!")); // true 
            Console.WriteLine(texto.Equals("este texto é um teste!")); // false
            Console.WriteLine(texto.Equals("este texto é um teste!", StringComparison.OrdinalIgnoreCase)); // true
        }
    }
}