using System;

namespace Stopwatch
{
    class Program
    {
        static void Main(string[] args)
        {
            Menu();            
        }

        static void PreStart(int time)
        {
            Console.Clear();
            Console.WriteLine("Read...");

            Thread.Sleep(1000);
            
            Console.WriteLine("Set...");

            Thread.Sleep(1000);
        
            Console.WriteLine("Go!!!");
            

            Thread.Sleep(2000);

            Start(time);
        }
        static void Menu()
        {
            Console.Clear();

            Console.WriteLine("}------------------");
            Console.WriteLine("     Stopwatch");
            Console.WriteLine("-------------------{");
            Console.WriteLine("-");
            Console.WriteLine("{s}- Segundos; -> (10s) = 10 segundos!");
            Console.WriteLine("{m}- Minutos; -> (1m) = 1 minuto!");
            Console.WriteLine("{0s}- Sair;");
            Console.WriteLine("-");

            Console.Write("Quanto tempo deseja contar?");
            Console.WriteLine();

            Console.Write("-> ");
            string date = Console.ReadLine().ToLower();
            
            /*
                Substring:
                    Retrieves a substring from this instance. The substring starts at a specified
                    character position and has a specified length.
            
                Length:
                    Gets the number of characters in the current System.String object.

                O pedaço de código abaixo é responsável por identificar o argumento para executar o stopwatch em segundos ou
                em minutos.
            */
            char type = Convert.ToChar(date.Substring(date.Length - 1, 1));

            int time = Convert.ToInt32(date.Substring(0, date.Length - 1));

            int multiplier = 1;


            if (type == 'm')
                multiplier = 60;

            if (time == 0)
                System.Environment.Exit(0);



            PreStart(time * multiplier);

            // Console.WriteLine(date);
            // Console.WriteLine(type);
            // Console.WriteLine(time);
        
        }
        static void Start(int time)
        {
            int currentTime = 0;
            
            
            while (currentTime != time)
            {
                Console.Clear();

                currentTime++;

                Console.Write($"Tempo decorrido: {currentTime} ;");

                /*
                    Controla o tempo da nossa execução:
                    
                    Suspends the current thread for the specified number of milliseconds.
                */
                Thread.Sleep(1000);
            }

            Console.Clear();
            Console.WriteLine("Stopwatch finalizado");
            
            Thread.Sleep(3000);
            
            Menu();
        }
    }
}