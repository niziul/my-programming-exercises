using System;

namespace MeuAppConvertTypes
{
    class Program
    {
        static void Main(string[] args)
        {
            int inteiro = 100;
            float real = 25.5f;
            
            /*
                Conversão implícita:
            */

            // inteiro = real; // <-- incorreto
            // real = inteiro; // <-- correto

            /*
                conversão explicita:
            */

            // inteiro = (int)real; 
            // Console.WriteLine(inteiro);
            
            // string valorReal = real.ToString();
            // inteiro = int.Parse("255");
            // Console.WriteLine(valorReal);

            inteiro = Convert.ToInt32(real);
            Console.WriteLine(inteiro);
            Console.WriteLine(Convert.ToBoolean(1));
        }
    }
}