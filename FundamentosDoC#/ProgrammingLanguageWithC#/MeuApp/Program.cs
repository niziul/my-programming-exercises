using System;

namespace MeuApp
{
    class Program
    {
        static void Main(string[] args)
        {
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