using System;
using System.Text;

namespace HtmlEditor
{
    public static class Editor
    {
        public static void Show()
        {
            Console.WriteLine();
            Menu.MenuHead("MODE EDITOR", ConsoleColor.Blue);

            Console.WriteLine();
            Start();

            Console.WriteLine();
            
            Thread.Sleep(2000);
            Menu.MenuSkeleton("<<<<<<<<<<<<<<::>>>>>>>>>>>>>>");

            Console.WriteLine();


            // .Sleep(5000);
        }

        public static void Start()
        {
            var file = new StringBuilder();

            Console.WriteLine();
            while(Console.ReadKey().Key != ConsoleKey.Escape)
            {
                file.Append(Console.ReadLine());
                file.Append(Environment.NewLine);
                Console.WriteLine();
                
            } 

            Console.Clear();

            Console.WriteLine();

            Viewer.Show(file.ToString());

            Thread.Sleep(7000);
        }
    }
}
