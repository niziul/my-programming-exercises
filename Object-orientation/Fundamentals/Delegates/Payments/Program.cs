using Spectre.Console;

namespace Payments;

class Program
{

    static void Main(string[] args)
    {
        // Delegates => Anonymous Methods:
        var pay = new Payments.Pay(RealizesPayment);
            pay(25);
        // ::
    }

    public class Payments { public delegate void Pay(double value); }
 
    public static void RealizesPayment(double value) 
    { 
        AnsiConsole.Write(new Markup($"[blue]I paid the amount of[/] [dim red]${value}[/]")); 
    }
}