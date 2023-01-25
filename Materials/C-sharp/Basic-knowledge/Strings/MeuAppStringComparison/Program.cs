using System;

namespace MeuAppStringComparison
{
    class Program
    {
        static void Main(string[] args)
        {
            // var texto = "Testando";
            var texto = "Este texto é um teste!";

            // Console.WriteLine(texto.CompareTo("Testando"));
            // Console.WriteLine(texto.CompareTo("testando"));
            
            Console.WriteLine(texto.CompareTo("teste!"));


            // Console.WriteLine(texto.Contains("teste")); // input: True
            // Console.WriteLine(texto.Contains("Teste")); // input: False

            /*
                O argumento abaixo "StringComparison.OrdinalIgnoreCase" desabilita a sensibilidade do método de identificar 
                a diferença entre um character em maiúsculo ou minusculo. 
            */
            // Console.WriteLine(texto.Contains("Teste", StringComparison.OrdinalIgnoreCase)); // input: True

            // Console.WriteLine(texto.Contains(null)); // Não funciona com argumentos




        }
    }
}