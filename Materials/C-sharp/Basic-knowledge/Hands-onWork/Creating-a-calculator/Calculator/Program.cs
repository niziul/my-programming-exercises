using System;

namespace Calculator
{
    class Program
    {
        static void Main(string[] args)
        {
            Menu();
        }

        // Encapsulamento:
        
        static void Menu()
        {
            Console.Clear();

            Console.WriteLine("{-------------");
            Console.WriteLine("O que deseja fazer?");
            Console.WriteLine("-");
            Console.WriteLine("{1} - Soma;");
            Console.WriteLine("{2} - Subtração;");
            Console.WriteLine("{3} - Divisão;");
            Console.WriteLine("{4} - Multiplicação;");
            Console.WriteLine("-");
            Console.WriteLine("{5} - Sair;");
            Console.WriteLine("--------------}");
            Console.Write("[input] -> ");
            
            short input = Convert.ToInt16(Console.ReadLine());

            switch (input)
            {
                case 1: Soma(); break;
                case 2: Subtracao(); break;
                case 3: Divisao(); break;
                case 4: Multiplicacao(); break;
                case 5: System.Environment.Exit(0); break;
                default: Menu(); break;
            }
        }
        
        static void Soma()
        {
            Console.Clear();
            
            Console.WriteLine("{-------------");
            Console.WriteLine("Soma:");
            Console.WriteLine("--------------}");

            //Console.Write();

            Console.Write("Primeiro Valor: ");
            float primeiroValorSo = Convert.ToSingle(Console.ReadLine());

            Console.Write("Segundo Valor: ");
            float segundoValorSo = Convert.ToSingle(Console.ReadLine());
            

            Console.WriteLine();

            /*
                Interpolação de strings:
            */


            // float resultadoSo = primeiroValorSo + segundoValorSo;
            // Console.WriteLine("O Resultado da soma é: " + resultadoSo);


            // float resultadoSo = primeiroValorSo + segundoValorSo;
            // Console.WriteLine($"O Resultado da soma é: {resultadoSo}");


            
            // Console.WriteLine($"O Resultado da soma é: {primeiroValorSo + segundoValorSo}");




            Console.WriteLine("O Resultado da soma é: " + (primeiroValorSo + segundoValorSo));

            

            // Console.WriteLine("--> : " + primeiroValorSo);
            // Console.WriteLine("--> : " + segundoValorSo);
            // Console.Read();
            // Console.ReadLine();
        
            Console.ReadKey();

            Menu();
        }
    
        static void Subtracao()
        {
            Console.Clear();

            Console.WriteLine("{-------------");
            Console.WriteLine("Substração:");
            Console.WriteLine("--------------}");

            Console.Write("Primeiro valor: ");
            float primeiroValorSu = Convert.ToSingle(Console.ReadLine());

            Console.Write("Primeiro valor: ");
            float segundoValorSu = Convert.ToSingle(Console.ReadLine());


            Console.WriteLine();

            float resultadoSu = primeiroValorSu - segundoValorSu;
            Console.WriteLine($"O resultado da subtração é: {resultadoSu}");

            Console.ReadKey();

            Menu();
        }
    
        static void Divisao()
        {
            Console.Clear();

            Console.WriteLine("{-------------");
            Console.WriteLine("Divisão:");
            Console.WriteLine("--------------}");

            Console.Write("Primeioro valor: ");
            float primeiroValorD = Convert.ToSingle(Console.ReadLine());

            Console.Write("Segundo valor: ");
            float segundoValorD = Convert.ToSingle(Console.ReadLine());
             

            Console.WriteLine();

            float resultadoD = primeiroValorD / segundoValorD;
            Console.WriteLine($"O resultado da divisão é: {resultadoD}");
        
            Console.ReadKey();

            Menu();
        }

        static void Multiplicacao()
        {
            Console.Clear();

            Console.WriteLine("{-------------");
            Console.WriteLine("Multiplicação:");
            Console.WriteLine("--------------}");

            Console.Write("Primeiro valor: ");
            float primeiroValorM = Convert.ToSingle(Console.ReadLine());

            Console.Write("Segundo valor: ");
            float segundoValorM = Convert.ToSingle(Console.ReadLine());
            

            Console.WriteLine();


            float resultadoD = primeiroValorM * segundoValorM;
            Console.WriteLine("O resultado da multiplicação é " + resultadoD);

            Console.ReadKey();

            Menu();
        }
    }
}