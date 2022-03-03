using Spectre.Console;

namespace Payments;

class Program
{
    public static void Main(string[] args) 
    { 
        Payments.DueDate = DateTime.Now;

        AnsiConsole.Write(new Markup($"[blue]{Payments.DueDate}[/]")); 
    }
    
    public static class Payments 
    { 
        public static DateTime DueDate { get; set; }
    }

    public static class Settings
    {
        public static string? API_URL { get; set; }
    }
}