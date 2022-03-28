using Balta.ContentContext;
using Spectre.Console;

namespace Balta;

class Program 
{
    static void Main(string[] args)
    {
        AnsiConsole.Clear();

        var courses = new List<Course>();
        var courseOOP = new Course("Fundamentos OOP", "fundamentos-oop");

        courses.Add(courseOOP);

        var careers = new List<Career>();  

        var careerDotnet = new Career("Especialista .NET", "especialista-dotnet");
        var careerItem = new CareerItem(1, "Comece por aqui", "", courseOOP);

        careerDotnet.Items.Add(careerItem);
        
        careers.Add(careerDotnet);

        foreach(var career in careers)
        {
            AnsiConsole.Write(new Rule($"[red]{career.Title}[/]"));
            foreach(var item in career.Items)
            {
                AnsiConsole.Write(new Markup($"{item.Order} - [underline blue]{item.Title}[/]"));
                AnsiConsole.WriteLine();
                AnsiConsole.Write(new Markup($"[green]Title[/]: {item.Course.Title}"));
                AnsiConsole.WriteLine();
                AnsiConsole.Write(new Markup($"[green]Level[/]: {item.Course.Level}"));

                foreach (var notification in item.Notifications)
                {
                    AnsiConsole.MarkupLine($"[blue]{notification.Property}[/] - [red]{notification.Message}[/]");
                }
            }
        }
    }
}