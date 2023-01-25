using System;

namespace MeuAppConditionalSwitch
{
    class Program
    {
        static void Main(string[] args)
        {
            // string valor = "Luis";
            // switch (valor)
            // {
            //     case "Luis": Console.WriteLine("É este!"); break;
            //     case "Andre": Console.WriteLine("Não é o cara!"); break;
            //     case "Pedro": Console.WriteLine("Não é o cara!"); break;
            //     default: Console.WriteLine("Não é o cara!"); break; // Se não for 1,2 ou 3.
            // }





            
            // bool valor = true;
            // switch (valor)
            // {
            //     case true: Console.WriteLine("É este!"); break;
            //     default: Console.WriteLine("Não é o cara!"); break; 
            // }




            

            // int valor = 1;
            // switch (valor)
            // {
            //     case 1: Console.WriteLine("1"); break;
            //     case 2: Console.WriteLine("2"); break;
            //     case 3: Console.WriteLine("3"); break;
            //     default: Console.WriteLine("4"); break; // Se não for 1,2 ou 3.
            // }



            bool? valor = null;
            switch (valor)
            {
                case true: Console.WriteLine("Verdadeiro"); break;
                case false: Console.WriteLine("Falso"); break;
                default: Console.WriteLine("Nulo"); break; 
            }




        

        



        }
    }
}