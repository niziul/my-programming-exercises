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
        AnsiConsole.Write(new Markup($"Due Date: [underline #00ff00][/];"));
        AnsiConsole.WriteLine();
        AnsiConsole.Write(new Markup($"Number Billet: [italic #ff5f5f][/];"));
    }

    /*
        Modificadores de acesso:

            - Private, protected, internal e public
    */

    public class Payments
    {
        // DateTime DueDate;
        // private DateTime DueDate;
        protected DateTime DueDate;

        // void Pay(){}
        // private void Pay(){}
        protected void Pay(){}
  
    }

    public class BilletPayment : Payments
    {
        void Test()
        {
            base.DueDate = DateTime.Now;
        }
  
    }
}