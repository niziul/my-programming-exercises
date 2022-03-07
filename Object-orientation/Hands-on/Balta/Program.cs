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
        var careerItem = new CareerItem(1, "Comece por aqui", "", null);

        careerDotnet.Items.Add(careerItem);
        careers.Add(careerDotnet);

        foreach(var career in careers)
        {
            AnsiConsole.Write(career.Title);
            AnsiConsole.WriteLine();
            foreach(var item in career.Items)
            {
                AnsiConsole.Write($"{item.Order} - {item.Title}");
            }
        }
    }
}