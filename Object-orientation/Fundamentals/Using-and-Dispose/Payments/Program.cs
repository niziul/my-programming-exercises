using Spectre.Console;

namespace Payments;

class Program
{
    static void Main(string[] args)
    {
        // var Payments = new Payments();
            // Payments.Dispose();
        
        AnsiConsole.Clear();
        
        using(var payments = new Payments()) 
        { 
            AnsiConsole.Status().Spinner(Spinner.Known.Dots).Start("[green]Processing the payment[/]", ctx => { Thread.Sleep(3000); }); 
            AnsiConsole.WriteLine();
            AnsiConsole.Write(new Markup("[dim green]Processed payment[/] [green]:check_mark:[/]")); 
            AnsiConsole.WriteLine(); Thread.Sleep(2000); 
            AnsiConsole.Clear(); 
        }
        
    }

    public class Payments : IDisposable
    {
        public Payments() { AnsiConsole.Status().Spinner(Spinner.Known.Dots).Start("[blue]Initiating payment[/]", ctx => { Thread.Sleep(3000); }); }

        /*
            Garbage Collector:
        */
        public void Dispose() { AnsiConsole.Status().Spinner(Spinner.Known.Dots).Start("[red]Finalizing the payment[/]", ctx => { Thread.Sleep(3000); }); }
    }
} 
