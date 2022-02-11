using System;

namespace CreateATextEditor
{
    class Program
    {
        static void Main(string[] args)
        {
            Menu();
        }

        static void Menu()
        {
            Console.Clear();
            Console.WriteLine("O que você deseja fazer?");

            Console.WriteLine("-----------------------[");
            Console.WriteLine("[1] - Abrir arquivo;");
            Console.WriteLine("[2] - Editar arquivo;");
            Console.WriteLine("[0] - Sair;");
            Console.WriteLine("-----------------------[");

            Console.Write("~ ");
            short option = Convert.ToInt16(Console.ReadLine());

            
            switch (option)
            {
                case 0: System.Environment.Exit(0); break;
                case 1: Abrir(); break;
                case 2: Editar(); break;
                default: Menu(); break;
            }
        }

        static void Abrir()
        {
            Console.Clear();
            Console.WriteLine("-----------------------[");
            Console.WriteLine("Qual caminho do arquivo?");
            Console.WriteLine("-----------------------[");
            Console.Write("-[ ");

            string path = Console.ReadLine();
            
            Console.Clear();
            
            Console.WriteLine("]-----------------------[");
            Console.WriteLine();

            using (var file = new StreamReader(path))
            {
                string text = file.ReadToEnd();
                
                Console.WriteLine(text);
            }
            Console.WriteLine("]-----------------------[");

            Console.ReadLine();

            Menu();
        }

        static void Editar()
        {
            Console.Clear();
            Console.WriteLine("Digite o conteúdo que \ndeseja salvar. (ESC para sair)");
            Console.WriteLine("-----------------------[");
            Console.WriteLine();
            
            string text = "";
            
            int numberOfTheLine = 1;

            Console.Write($"[{numberOfTheLine}] - ");

            while (Console.ReadKey().Key is not ConsoleKey.Escape) 
            {
                numberOfTheLine++;

                text += Console.ReadLine();
                text += Environment.NewLine;
                
                Console.Write($"[{numberOfTheLine}] - ");
            }
            
            
            Console.Clear();
            Console.WriteLine("-----------------------[");

            Salvar(text);
        }
        
        
        static void Salvar(string text)
        {
            Console.Clear();
            Console.WriteLine("Qual caminho para salvar o arquivo?");

            var path = Console.ReadLine();

            using (var file = new StreamWriter(path))
            {
                file.Write(text);
            }

            Console.WriteLine("-----------------------[");
            Console.WriteLine($"Arquivo salvo com sucesso!\npath: {path}");
            Console.WriteLine("-----------------------[");
            Console.ReadLine();

            Menu();
        }
    }
}