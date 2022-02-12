using System;

namespace MeuAppStringInterpolation
{
    class Program
    {
        static void Main(string[] args)
        {

            var price = 10.2 + 10; // Soma

            /*
                Interpolação:
            */

            // var textPrice = "O preço do produto é: " + price + " apenas na promoção!"; // Concatenação

            // var textPrice = string.Format("O preço do produto é {0} apenas na promoção!", price); // "string.Format" é responsável por formatar uma cadeia de caractere

            // var textPrice = $"O preço do produto é {price} apenas na promoção"; // Um dos melhores jeito para realizar a Concatenação

            var textPrice = $@"O preço \n do produto \ é {price} apenas na promoção"; // Variação com o "@" que ajuda na hora de ignora caracteres especias
        
            

            Console.WriteLine(textPrice);
        }
    }
}