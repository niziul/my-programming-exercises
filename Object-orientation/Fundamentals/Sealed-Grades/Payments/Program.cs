using Spectre.Console;

namespace Payments;

class Program
{
    public static void Main(string[] args) 
    { 
        AnsiConsole.Write(new Markup($"[blue]{Payments.DueDate}[/]")); 
    }
    
    public sealed class Payments 
    { 
        public static DateTime DueDate { get; set; }
    }    
}