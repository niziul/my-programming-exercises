using System;

namespace MeuApp
{
    class Program
    {
        static void Main(string[] args)
        {
            int idade; // Correto inicia com ZERO
            //int idade = 25; // Correto inicia com 25
            //var idade = 25; // Correto inicia com 25
            //var idade; // Errado



            var text = "Testing";

            interfaceLineChar();
            interfaceForShowUser();
            Console.WriteLine(text.ToLower());  
            interfaceForShowUser();
            interfaceLineChar();

            void interfaceLineChar()
            {
                for (int i = 0; i < 6; i++)
                {
                    Console.Write("-");
                }
            }
            void interfaceForShowUser()
            {
                for (int i = 0; i < 6; i++)
                {
                    Console.WriteLine("-");
                }
            }
        }

        
    }
}