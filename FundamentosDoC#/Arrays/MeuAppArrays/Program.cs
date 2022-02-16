using System;

namespace MeuAppArrays
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Clear();
            
            /*
                Arrays:
            */

        
            /// os arrays sempre iniciam com o valor 0;
        
            // int[] meuArray = new int[];

            //var meuArray = new int[5];
        
            
            
            // Console.WriteLine(meuArray[0]);
            // Console.WriteLine(meuArray[1]);
            // Console.WriteLine(meuArray[2]);
            // Console.WriteLine(meuArray[3]);
            // Console.WriteLine(meuArray[4]);
        
        

            /* criando e atribuindo valores a um array: */ 
            
            // var meuArray = new int[5];
        
            // var meuArray = new int[5]{1, 4, 2, 5, 6};

            // var meuArray = new string[5]{"a", "b", "c", "d", "e"};

            // var meuArray = new bool[2]{true, false};

            var meuArray = new test[2]{ new test(), new test()};
            
            // meuArray[0] = 12;

            // Console.WriteLine(meuArray[0]); // 12

            Console.WriteLine(meuArray[0].Id);
            // Console.WriteLine(meuArray[1]);
            // Console.WriteLine(meuArray[2]);
            // Console.WriteLine(meuArray[3]);
            // Console.WriteLine(meuArray[4]);
        

        }

        struct test
        {
            public int Id {get; set;}
        }
    }
}