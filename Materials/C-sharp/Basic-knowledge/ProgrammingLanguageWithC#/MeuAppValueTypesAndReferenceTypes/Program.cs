using System;

namespace MeuAppValueTypesAndReferenceTypes
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Type Stack:");
            /*
                Type Stack:
            */

            int x = 25;
            int y = x;

            Console.WriteLine(x);
            Console.WriteLine(y);


            Console.WriteLine();

            x = 32;

            Console.WriteLine(x);
            Console.WriteLine(y);


            Console.WriteLine();

            Console.WriteLine("Type Heap:");
            /*
                Type Heap:
            */
            
            var arr = new string[2];
            arr[0] = "Item 1";

            var arr2 = arr;

            Console.WriteLine(arr[0]);
            Console.WriteLine(arr2[0]);


            Console.WriteLine();   
            
            arr[0] = "Item 2";


            Console.WriteLine(arr[0]);
            Console.WriteLine(arr2[0]);

            
        }
    }
}