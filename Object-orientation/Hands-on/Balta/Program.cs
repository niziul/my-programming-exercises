using Balta.ContentContext;
using Spectre.Console;

namespace Balta;

class Program 
{
    static void Main(string[] args)
    {
        AnsiConsole.Clear();

        var articles = new List<Article>();
            articles.Add(new Article("Artigo sobre OOP", "orientacao-objetos"));
        
        
        
        foreach(var article in articles)
        {
            AnsiConsole.Write(new Rule("Id").LeftAligned());
            AnsiConsole.Write(new Markup($"[red]{article.Id}[/]"));
            AnsiConsole.WriteLine();

            AnsiConsole.Write(new Rule("Title").LeftAligned());
            AnsiConsole.Write(new Markup($"[green]{article.Title}[/]"));
            AnsiConsole.WriteLine();
            
            AnsiConsole.Write(new Rule("Url").LeftAligned());
            AnsiConsole.Write(new Markup($"[blue]{article.Url}[/]"));
            AnsiConsole.WriteLine();
        }
    }
}