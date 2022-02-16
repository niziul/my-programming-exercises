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

            // var meuArray = new test[2]{ new test(), new test()};
            
            // // meuArray[0] = 12;

            // // Console.WriteLine(meuArray[0]); // 12

            // Console.WriteLine(meuArray[0].Id);
            // // Console.WriteLine(meuArray[1]);
            // // Console.WriteLine(meuArray[2]);
            // // Console.WriteLine(meuArray[3]);
            // // Console.WriteLine(meuArray[4]);
        





            /*
                Percorrendo um array:
            */

            // var meuArray = new int[5]{ 1, 2, 3, 4, 5 };
            //     meuArray[0] = 12;
            //     meuArray[1] = 15;

            // // Console.WriteLine(meuArray.Length); // 5

            // for (var index = 0; index < meuArray.Length; index++)
            //     Console.WriteLine(meuArray[index]);








            /*
                ForEach:
            */

            var meuArray = new int[5] { 1, 2, 3, 4, 5};
            meuArray[0] = 12;

            var funcionarios = new Funcionario[5];
                funcionarios[0] = new Funcionario() { Id = 2579, Nome = "Luis"};

            // Console.WriteLine(meuArray.Length);

            foreach (var item in meuArray)
            {
                Console.WriteLine(item);
            }

            foreach (var funcionario in funcionarios)
            {
                Console.WriteLine(funcionario.Nome);
                Console.WriteLine(funcionario.Id);
            }









        }

        struct test
        {
            public int Id {get; set;}
        }

        public struct Funcionario
        {
            public int Id {get; set;}
            public string Nome {get; set;}
        }
    }
}