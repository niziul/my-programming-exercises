using System;
using System.Text;

namespace MeuAppBuilder
{
    class Program
    {
        static void Main(string[] args)
        {
            var texto = new StringBuilder();

            texto.Append("Este texto é um teste!\n");
            texto.Append("Primeira linha\n");
            texto.Append("Segunda linha\n");
            texto.Append("Terceira linha\n");
            texto.Append("Quarta linha\n");
            texto.Append("Quinta linha");

            texto.ToString();
            Console.WriteLine(texto);
            // texto += " aqui";
        }
    }
}