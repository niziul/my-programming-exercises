using System;

namespace HtmlEditor
{
    public static class Menu
    {
        public static void Show()
        {
            Console.Clear();

            MenuSkeleton("°°°°°°°°°°°°°°°°");

            MenuHead("> HTML EDITOR <", ConsoleColor.Red);
            
            MenuBody();
            
            MenuSkeleton("<<<<<<<<<<<<<<::>>>>>>>>>>>>>>");
            Console.WriteLine();

            // HandleMenuOption();
            
            Thread.Sleep(2000);

            Editor.Show();

            MenuSkeleton("<<<<<<<<<<<<<<::>>>>>>>>>>>>>>");
            
            EndOfMenu();
            Console.WriteLine();

            MenuSkeleton("<<<<<<<<<<<<<<::>>>>>>>>>>>>>>");

            Console.WriteLine();

            Thread.Sleep(4000);
            Console.Clear();
        }
        
        public static void HandleMenuOption()
        {
            switch(ConsoleInputs.Options)
            {
                case 1: Console.WriteLine("Editor"); break;
                case 2: Console.WriteLine("View"); break;
                case 0: {
                    Console.Clear();

                    Environment.Exit(0);

                    break;
                }
                default: Show(); break;
            }
        }
        public static void MenuHead(string contents, ConsoleColor color)
        {
            Console.BackgroundColor = color;
            Console.ForegroundColor = ConsoleColor.Black;

            WriteCentered($"{contents}", -1, 0);

            Console.BackgroundColor = AttributesForConsoleMenu.BackgroundColorDefaultConsole;
            Console.ForegroundColor = AttributesForConsoleMenu.ForegroundColorDefaultConsole;

            MenuSkeleton("°°°°°°°°°°°°°°°°");
        }

        static void MenuBody()
        {
            var gabMenuBody = 2;

            WriteLineCentered("Selecione um das opções abaixo!", 0);
            Console.WriteLine();
            WriteLineCentered("[1] - Novo Arquivo;", (-5 + gabMenuBody));
            Console.WriteLine();
            WriteLineCentered("[2] - Abrir;", (2 + gabMenuBody));
            Console.WriteLine();
            WriteLineCentered("[0] - Sair;", (2 + gabMenuBody));

            // Console.WriteLine();
            // WriteLineCentered("[9] - Testing;", -2);

            Console.WriteLine();
            MenuSkeleton("°°°°°°°°°°°°°°°°");
            
            WriteCentered("", -0);
            Console.WriteLine();

            WriteCentered("[Opção] ~ ", 2);
            ConsoleInputs.Options = Convert.ToInt32(Console.ReadLine());
        }
        
        static void EndOfMenu()
        {
            // Console.BackgroundColor = ConsoleColor.DarkRed;
            // Console.ForegroundColor = ConsoleColor.Black;

            WriteCentered("> Thanks e tchau, tchau! <", -4, 3);

            Console.BackgroundColor = AttributesForConsoleMenu.BackgroundColorDefaultConsole;
            Console.ForegroundColor = AttributesForConsoleMenu.ForegroundColorDefaultConsole;
        }
        
        struct AttributesForConsoleMenu
        {
            public static int DifferenceForCentralization = 2;
            public static ConsoleColor BackgroundColorDefaultConsole = Console.BackgroundColor;
            public static ConsoleColor ForegroundColorDefaultConsole = Console.ForegroundColor;
        }
        
        struct ConsoleInputs
        {
            public static int Options {get; set;}

        }
        public static void MenuSkeleton(string nameForMenu)
        {
            var textForMenu = nameForMenu;
            var gabMenu = 3;

            for (var i = 0; i <= ((Console.BufferWidth + gabMenu - 2) - textForMenu.Length - AttributesForConsoleMenu.DifferenceForCentralization) / 2; i++)
                Console.Write("-");

            Console.Write(textForMenu);

            for (var i = (Console.BufferWidth - textForMenu.Length - AttributesForConsoleMenu.DifferenceForCentralization - gabMenu + 2) / 2; 
                    i <= Console.BufferWidth - textForMenu.Length - AttributesForConsoleMenu.DifferenceForCentralization - gabMenu + 2; i++)
                Console.Write("-");
        }

        public static void WriteCentered(string stringb, int gab)
        {
            var textForWrite = stringb;

            Centered(textForWrite, gab);

            Console.Write(textForWrite);         
            
            //Centered(textForWrite, gab);
        }

        public static void WriteCentered(string stringb, int gab1, int gab2)
        {
            var textForWrite = stringb;

            Centered(textForWrite, gab1);

            Console.Write(textForWrite);         
            
            Centered(textForWrite, gab2);
        }

        public static void WriteLineCentered(string stringb, int gab)
        {
            var textForWrite = stringb;

            Centered(textForWrite, gab);

            Console.WriteLine(textForWrite);  

            Centered(textForWrite, gab);

        }

        public static void Centered(string stringb, int gab)
        {
            for (var i = 0; i <= (Console.BufferWidth - stringb.Length - AttributesForConsoleMenu.DifferenceForCentralization - gab) / 2; i++)
                Console.Write(" ");
        }
    }
}