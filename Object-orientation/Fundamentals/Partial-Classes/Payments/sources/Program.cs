using Spectre.Console;

namespace Payments;

class Program 
{ 
    public static void Main(string[] args) 
    { 
        var payment = new Payment(); 
            payment.propertyA = 5; 
            payment.propertyB = 10; 
            
        var property = new Rule(); 
            property.Title = "[blue]Property[/]"; 
            property.Alignment = Justify.Left;

        AnsiConsole.Clear(); AnsiConsole.Write(property); AnsiConsole.Write(
            new Markup($"A - [red]{payment.propertyA}[/] \nB - [red]{payment.propertyB}[/]")
            ); 
    } 
}
