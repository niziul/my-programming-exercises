using Spectre.Console;

namespace Payments;

class Program
{
    static void Main(string[] args)
    {
        var TheTitle = new Rule();
            TheTitle.RuleTitle("[red]Payment Information[/]");
            TheTitle.Alignment = Justify.Left;

        var Payments = new Payments();
            

        AnsiConsole.Clear();
        AnsiConsole.Write(TheTitle);
        AnsiConsole.Write(new Markup($"Due Date: [strikethrough #00ff00]empty[/];"));
        AnsiConsole.WriteLine();
        AnsiConsole.Write(new Markup($"Number Billet: [strikethrough #00ff00]empty[/];"));
    }

    /*
        Modificadores de acesso:

            - Private, protected, internal e public
    */

    public class Payments
    {
        // DateTime DueDate;
        // private DateTime DueDate;
        DateTime DueDate;
        Address ?BillingAddress;
        // void Pay(){}
        // private void Pay(){}
        void Pay(){}
  
    }

    public class Address
    {
        string ?ZipCode;
    }
}