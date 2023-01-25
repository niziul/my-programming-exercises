using System;
using System.Text.RegularExpressions;

namespace HtmlEditor
{
    public class Viewer
    {
        public static void Show(string text)
        {
            Console.Clear();

            Menu.MenuSkeleton("<<<<<<<<<<<<<<::>>>>>>>>>>>>>>");
            Console.Clear();

            Console.WriteLine();
            Menu.MenuHead("MODE VISUALIZAÇÃO", ConsoleColor.Blue);

            Console.WriteLine();
            Replace(text);

            Console.WriteLine();
            
            Console.ReadKey();
            
            Thread.Sleep(7000);

            // Menu.Show();
            Menu.MenuSkeleton("");

            Console.WriteLine();
        }

        public static void Replace(string text)
        {
            var strong = new Regex(@"<\s*strong[^>]*>(.*?)<\s*/\s*strong>");
            var words = text.Split(' ');

            for (var i = 0; i <= words.Length; i++)
            {
                if (strong.IsMatch(words[i]))
                {
                    Console.ForegroundColor = ConsoleColor.DarkGreen;

                    Menu.WriteLineCentered(
                        words[i].Substring(
                            words[i].IndexOf('>') + 1,
                            (words[i].LastIndexOf('<') - 1) - words[i].IndexOf('>')
                        ), 
                    0);


                }
                else
                {
                    Console.ForegroundColor = ConsoleColor.Black;
                    //Console.Write(words[i]);
                }
            }

            
        }
    }
}