using System;

namespace MeuAppNullableTypes
{
    class Program
    {
        static void Main(string[] args)
        {
            // int idade = null; // <-- jeito errado
            // int? idade = null; // <- jeito correto

            // int? idadeNull = null;
            // byte? t = null;

            int? idade = 0;
            Console.WriteLine(idade);
            idade = null;
            Console.WriteLine(idade);
            idade = 25;
            Console.WriteLine(idade);
        }
    }
}