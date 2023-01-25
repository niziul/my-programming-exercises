using System;

namespace MeuAppConditional
{
    class Program
    {
        static void Main(string[] args)
        {
            ///Condicional simples:

            // if (25 == 32)
            // {
            //     Console.WriteLine("É igual!");
            // }
            
            /*
                Variação:
            */
            // if (25 == 32)
            //     Console.WriteLine("É igual!");

             


            
            
            // if (25 != 32)
            // {
            //     Console.WriteLine("É igual!");
            // }
            
            /*
                Variação:
            */
            //  if (25 != 32)
            //     Console.WriteLine("É igual!");






            // if (25 != 32)
            // {
            //     Console.WriteLine("É Diferente!");
            // }
            // else
            // {
            //     Console.WriteLine("É igual!");
            // }
            /*
                Variação:
            */
            // if (25 != 32)
            //     Console.WriteLine("É Diferente!");
            // else
            //     Console.WriteLine("É igual!");








            // int idade = 18;
            // int maioridade = 21;

            // if (idade >= maioridade)
            // {
            //     Console.WriteLine("Maior de idade!");
            // }
            // else
            // {
            //     Console.WriteLine("Menor de idade!");
            // }
            /*
                Variação:
            */
            // if (idade >= maioridade) 
            //     Console.WriteLine("Maior de idade!");
            // else
            //     Console.WriteLine("Menor de idade!");








            
            // int idade = 18;
            // int maioridade = 21;
            // int idadeMaxima = 65;

            // if (idade >= maioridade && idade < idadeMaxima)
            // {
            //     Console.WriteLine("Maior de idade!");
            // }
            // else
            // {
            //     Console.WriteLine("Menor de idade!");
            // }
            /*
                Variação:
            */
            // if (idade >= maioridade && idade < idadeMaxima)
            //     Console.WriteLine("Maior de idade!");
            // else
            //     Console.WriteLine("Menor de idade!");








            // int idade = 18;
            // int maioridade = 21;
            // int idadeMaxima = 65;
            
            // if (idade >= maioridade || idade < idadeMaxima)
            // {
            //     Console.WriteLine("Maior de idade!");
            // }
            // else
            // {
            //     Console.WriteLine("Menor de idade!");
            // }
            /*
                Variação:
            */
            // if (idade >= maioridade ||  idade < idadeMaxima)
            //     Console.WriteLine("Maior de idade!");
            // else
            //     Console.WriteLine("Menor de idade!");








            
            // int idade = 18;
            // int maioridade = 21;
            // int idadeMaxima = 65;
            
            // if (!(idade >= maioridade))
            // {
            //     Console.WriteLine("Maior de idade!");
            // }
            // else
            // {
            //     Console.WriteLine("Menor de idade!");
            // }
            /*
                Variação:
            */
            //  if (!(idade >= maioridade))
            //     Console.WriteLine("Maior de idade!");
            // else
            //     Console.WriteLine("Menor de idade!");










            // int idade = 18;
            // int maioridade = 21;
            // int idadeMaxima = 65;
            
            // if (idade <= maioridade)
            //     return;
            
            // Console.WriteLine("Maior de idade!");
            // Console.WriteLine("Maior de idade!");
            // Console.WriteLine("Maior de idade!");
            // Console.WriteLine("Maior de idade!");
            // Console.WriteLine("Maior de idade!");
            // Console.WriteLine("Maior de idade!");
            








            int idade = 18;
            int maioridade = 21;
            int idadeMaxima = 65;
            
            if (idade >= maioridade)
            {
                Console.WriteLine("Maior de idade!");
            }
            else if(idade >= 25)
            {
                Console.WriteLine("Menor de idade!");
            }
            else if(idade >= 32)
            {
                Console.WriteLine("Menor de idade!");
            }
            else if(idade >= 38)
            {
                Console.WriteLine("Menor de idade!");
            }
            else 
            {
                Console.WriteLine("Menor de idade!");
            }








            Console.WriteLine("Finalizar o programa!");
        }
    }
}