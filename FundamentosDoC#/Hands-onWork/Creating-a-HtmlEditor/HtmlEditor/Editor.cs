using System;
using System.Text;

namespace HtmlEditor
{
    public static class Editor
    {
        public static void Show()
        {
            Console.Clear();

            Menu.MenuSkeleton("°°°°°°°°°°°°°°°°");
            Menu.MenuHead("MODE EDITOR", ConsoleColor.Blue);

            Console.WriteLine();
            Start();

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
                
            } 
            
            Console.WriteLine();
        }
    }
}
